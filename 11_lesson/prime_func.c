#include <stdio.h>
#include <stdbool.h>

bool is_prime_number (int x){          // в этой ф-ции определяем простое число или нет
    for(int divisor = 2; divisor*divisor <= x; ++divisor)
        if (x%divisor == 0)
            return false;
    return true;
}


int main(void)
{
    int x;
    printf("Enter number to check for simplicity:");
    scanf("%d", &x);

    if (is_prime_number(x))             // в главную ф-цю main передаём результат определения
        printf("Number %d is prime!\n", x);
    else
        printf("Number %d is not prime...\n", x);

    return 0;
}
