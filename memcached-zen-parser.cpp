#include <chrono>
#include <iostream>
#include <string>
#include <vector>
#include "memcached-zen.pb.h"
#include "memcached-zen-parser.h"
using namespace std;
using namespace memcached_zen;

const HashEntry* find_key_from_hash(char* s, int len, Hash& hash) {
    for (int i = 0; i < hash.entries_size(); i++) {
        auto& e = hash.entries(i);
        if (len != e.key().size()) {
            continue;
        }
        if (strncmp(s, e.key().c_str(), len) == 0) {
            return &e;
        }
    }
    return NULL;
}

int get_sub_keys_len(const void* value, int value_len, char* req, int req_len)
{
    // Parse requested sub keys from req.
    // zen:[namespace]:n:<node-id>|property1,property2,...,propertyN

    Hash hash;  /* original hash stored as the value */
    Hash hash_result;  /* hash result which only contains the requested sub keys */

    bool ok = hash.ParseFromArray(value, value_len);
    if (!ok) {
        /* the original value is not stored as a Hash object */
        return -1;
    }

    /* does the request contains sub keys? */
    int sub_key_start = 0;
    while (sub_key_start < req_len) {
        if (req[sub_key_start++] == '|') {
            break;
        }
    }
    if (sub_key_start == req_len) {
        /* the request does not contain sub keys */
        return 0;
    }

    /* find all the requested sub keys */
    int sub_key_len = 0;
    int i = sub_key_start;
    while (i <= req_len) {
        if (req[i] == ',' || i == req_len) {
            sub_key_len = i - sub_key_start;
            const HashEntry* e = find_key_from_hash(req + sub_key_start, sub_key_len, hash);
            if (e != NULL) {
                /* add this entry to the result */
                HashEntry* e2 = hash_result.add_entries();
                e2->set_key(e->key());
                e2->set_value(e->value());
            }
            sub_key_start = i + 1;
        }
        i++;
    }

    return hash_result.ByteSize();
}

int get_sub_keys(const void* value, int value_len, char* req, int req_len, void* result)
{
    // Parse requested sub keys from req.
    // zen:[namespace]:n:<node-id>|property1,property2,...,propertyN

    Hash hash;  /* original hash stored as the value */
    Hash hash_result;  /* hash result which only contains the requested sub keys */

    bool ok = hash.ParseFromArray(value, value_len);
    if (!ok) {
        /* the original value is not stored as a Hash object */
        return -1;
    }

    /* does the request contains sub keys? */
    int sub_key_start = 0;
    while (sub_key_start < req_len) {
        if (req[sub_key_start++] == '|') {
            break;
        }
    }
    if (sub_key_start == req_len) {
        /* the request does not contain sub keys */
        return 0;
    }

    /* find all the requested sub keys */
    int sub_key_len = 0;
    int i = sub_key_start;
    while (i <= req_len) {
        if (req[i] == ',' || i == req_len) {
            sub_key_len = i - sub_key_start;
            const HashEntry* e = find_key_from_hash(req + sub_key_start, sub_key_len, hash);
            if (e != NULL) {
                /* add this entry to the result */
                HashEntry* e2 = hash_result.add_entries();
                e2->set_key(e->key());
                e2->set_value(e->value());
            }
            sub_key_start = i + 1;
        }
        i++;
    }

    int result_len = hash_result.ByteSize();
    // *result = malloc(result_len);
    hash_result.SerializeToArray(result, result_len);
    return result_len;
}

char *create_serialized_data(int *result_len)
{
    // Parse requested sub keys from req.
    // zen:[namespace]:n:<node-id>|property1,property2,...,propertyN

    Hash hash;
    for (int i = 0; i < 10; i++) {
        HashEntry* e = hash.add_entries();
        e->set_key(std::to_string(i));
        e->set_value(std::to_string(i + 100));
    }

    *result_len = hash.ByteSize();
    char *result = (char*)malloc(*result_len);
    hash.SerializeToArray(result, *result_len);
    return result;
}

void print_serialized_hash(char *data, int data_len)
{
    Hash hash;
    bool ok = hash.ParseFromArray(data, data_len);
    if (!ok) {
        return;
    }

    for (int i = 0; i < hash.entries_size(); i++) {
        auto& e = hash.entries(i);
        cout << "key: " << e.key() << endl;
        cout << "value: " << e.value() << endl;
    }
}

// int
// main(int argc, char **argv)
// {
//     GOOGLE_PROTOBUF_VERIFY_VERSION;

//     Hash hash;
//     for (int i = 0; i < 10; i++) {
//         HashEntry* e = hash.add_entries();
//         e->set_key(std::to_string(i));
//         e->set_value(std::to_string(i + 100));
//     }
//     std::string serialized;
//     hash.SerializeToString(&serialized);

//     void* result;
//     int result_len = get_sub_keys(serialized.c_str(), serialized.size(), "zen:test:n:1|1,2,3", strlen("zen:test:n:1|1,2,3"), &result);

//     Hash hash2;
//     hash2.ParseFromArray(result, result_len);
//     cout << "hash2.entries_size(): " << hash2.entries_size() << endl;
//     for (int i = 0; i < hash2.entries_size(); i++) {
//         auto& e = hash2.entries(i);
//         std::cout << e.key() << std::endl;
//         std::cout << e.value() << std::endl;
//     }
//     google::protobuf::ShutdownProtobufLibrary();
//     return EXIT_SUCCESS;
// }
