#ifndef MEMCACHED_ZEN_PARSER_H
#define MEMCACHED_ZEN_PARSER_H
#endif

#ifdef __cplusplus
extern "C"{
#endif
// a typedef creates a fake type, in this
// case for a function pointer
typedef void *(*item_alloc_func)(char *key, size_t nkey, int flags, unsigned int exptime, int nbytes);
typedef void *(*item_data_func)(void *item);

    int get_sub_keys(const void* value, int value_len, char* req, int req_len, void* result);
    int get_sub_keys_len(const void* value, int value_len, char* req, int req_len);
    char *create_serialized_data(int *result_len);
    void print_serialized_hash(char *data, int data_len);
    void *extract_sub_keys(const void* value, int value_len, char* req, int req_len, item_alloc_func item_alloc, item_data_func item_data);
    void *item_alloc_impl(char *key, size_t nkey, int flags, unsigned int exptime, int nbytes);
    void *item_data_impl(void *item);

#ifdef __cplusplus
};
#endif
