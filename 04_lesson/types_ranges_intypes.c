#include <stdio.h>
#include <inttypes.h>
#include <limits.h>

int main() {
    printf("=== INTEGER TYPES RANGES USING INTYPES.H ===\n\n");
    
    printf("int8_t: from %" PRId8 " to %" PRId8 "\n", INT8_MIN, INT8_MAX);         // int8_t: from -128 to 127
    printf("uint8_t: from 0 to %" PRIu8 "\n", UINT8_MAX);                          // uint8_t: from 0 to 255
    printf("\n");
    
    printf("int16_t: from %" PRId16 " to %" PRId16 "\n", INT16_MIN, INT16_MAX);    // int16_t: from -32768 to 32767
    printf("uint16_t: from 0 to %" PRIu16 "\n", UINT16_MAX);                       // uint16_t: from 0 to 65535
    printf("\n");
    
    printf("int32_t: from %" PRId32 " to %" PRId32 "\n", INT32_MIN, INT32_MAX);    // int32_t: from -2147483648 to 2147483647
    printf("uint32_t: from 0 to %" PRIu32 "\n", UINT32_MAX);                       // uint32_t: from 0 to 4294967295
    printf("\n");
    
    printf("int64_t: from %" PRId64 " to %" PRId64 "\n", INT64_MIN, INT64_MAX);    // int64_t: from -9223372036854775808 to 9223372036854775807
    printf("uint64_t: from 0 to %" PRIu64 "\n", UINT64_MAX);                       // uint64_t: from 0 to 18446744073709551615
    printf("\n");
    
    // Также можно вывести размеры типов
    printf("=== TYPE SIZES ===\n");
    printf("sizeof(int8_t): %zu byte\n", sizeof(int8_t));                          // sizeof(int8_t): 1 byte
    printf("sizeof(int16_t): %zu bytes\n", sizeof(int16_t));                       // sizeof(int16_t): 2 bytes
    printf("sizeof(int32_t): %zu bytes\n", sizeof(int32_t));                       // sizeof(int32_t): 4 bytes
    printf("sizeof(int64_t): %zu bytes\n", sizeof(int64_t));                       // sizeof(int64_t): 8 bytes
    
    return 0;
}