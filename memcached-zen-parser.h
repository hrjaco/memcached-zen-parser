#ifndef MEMCACHED_ZEN_PARSER_H
#define MEMCACHED_ZEN_PARSER_H
#endif

#ifdef __cplusplus
extern "C"{
#endif
    int get_sub_keys(const void* value, int value_len, char* req, int req_len, void* result);
    int get_sub_keys_len(const void* value, int value_len, char* req, int req_len);
    char *create_serialized_data(int *result_len);
    void print_serialized_hash(char *data, int data_len);
#ifdef __cplusplus
};
#endif
