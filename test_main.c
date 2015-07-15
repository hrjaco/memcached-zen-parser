#include <stdio.h>
#include "memcached-zen-parser.h"

int get_sub_keys_len(const void* value, int value_len, char* req, int req_len);

int main(int argc, char **argv)
{
    printf("%d\n", get_sub_keys_len(NULL, 0, NULL, 0));
    return 0;
}
