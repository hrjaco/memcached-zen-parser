#include <stdio.h>
#include "memcached-zen-parser.h"

int get_sub_keys_len(const void* value, int value_len, char* req, int req_len);
int get_sub_keys(const void* value, int value_len, char* req, int req_len, void* result);
char *create_serialized_data(int *result_len);
void print_serialized_hash(char *data, int data_len);

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
    print_serialized_hash(result, result_len);
    return 0;
}
