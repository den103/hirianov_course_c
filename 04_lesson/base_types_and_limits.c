#include <stdio.h>
#include <limits.h>

int main() {
    printf("=== INTEGER TYPES RANGES ===\n\n");
    
    printf("char: from %d to %d\n", CHAR_MIN, CHAR_MAX);                // char: from -128 to 127
    printf("short: from %d to %d\n", SHRT_MIN, SHRT_MAX);               // short: from -32768 to 32767
    printf("int: from %d to %d\n", INT_MIN, INT_MAX);                   // int: from -2147483648 to 2147483647
    printf("long: from %ld to %ld\n", LONG_MIN, LONG_MAX);              // long: from -2147483648 to 2147483647
    printf("long long: from %lld to %lld\n", LLONG_MIN, LLONG_MAX);     // long long: from -9223372036854775808 to 9223372036854775807
    printf("\n");
    
    printf("unsigned char: from 0 to %u\n", UCHAR_MAX);                 // unsigned char: from 0 to 255
    printf("unsigned int: from 0 to %u\n", UINT_MAX);                   // unsigned int: from 0 to 4294967295
    printf("unsigned long: from 0 to %lu\n", ULONG_MAX);                // unsigned long: from 0 to 4294967295
    printf("unsigned long long: from 0 to %llu\n", ULLONG_MAX);         // unsigned long long: from 0 to 18446744073709551615
    
    return 0;
}