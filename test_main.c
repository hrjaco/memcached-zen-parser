#include <stdio.h>
#include "memcached-zen-parser.h"

int get_sub_keys_len(const void* value, int value_len, char* req, int req_len);
int get_sub_keys(const void* value, int value_len, char* req, int req_len, void* result);
char *create_serialized_data(int *result_len);
void print_serialized_hash(char *data, int data_len);
void *item_alloc_impl(char *key, size_t nkey, int flags, unsigned int exptime, int nbytes);
void *item_data_impl(void *item);

int main(int argc, char **argv)
{
    int data_len;
    char *data = create_serialized_data(&data_len);
    printf("data_len: %d\n", data_len);
    print_serialized_hash(data, data_len);
    char *req = "key|1,2";
    int result_len = get_sub_keys_len(data, data_len, req, strlen(req));
    char *result = (char *)malloc(result_len);
    get_sub_keys(data, data_len, req, strlen(req), result);
    printf("result: %.*s\n", result_len, result);
    printf("result_len: %d\n", result_len);
    print_serialized_hash(result, result_len);
    printf("1\n");
    int i = 0;
    for (; i < result_len; i++) {
        printf("%d ", (*(result + i)) & 0xff);
    }
    printf("2\n");

    char *result2 = extract_sub_keys(data, data_len, req, strlen(req), item_alloc_impl, item_data_impl);
    i = 0;
    for (; i < result_len; i++) {
        printf("%d ", (*(result2 + i)) & 0xff);
    }
    printf("2\n");
    return 0;
}
