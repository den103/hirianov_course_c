#include <stdio.h>
#include <stdbool.h>

int main(void){
    int x;
    printf("Enter number to check for simplicity:");
    scanf("%d", &x);

    bool is_prime = true;
    for(int divisor = 2; divisor*divisor <= x; ++divisor)
        if (x%divisor == 0){
            is_prime = false;
            break;                 // используем break, чтобы не перебирать дальше делители
        }
            
    if (is_prime)
        printf("Number %d is prime!\n", x);
    else 
        printf("Number %d is not prime...\n", x);

    return 0;
}

/*
Программа определяет простое введённое число (делится само на себя и на 1) или нет.
(divisor = 2; divisor*divisor <= x; ++divisor) - начинаем с 2 и заканчиваем если квадрат текущего делителя равен или больше x.
На самом деле, нужно искать делитель до корня из введённого числа, дальше искать нет смысла.
Но здесь используется квадрат текущего перебираемого делителя, что имеет тот же смысл.
*/