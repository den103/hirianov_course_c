#include <stdio.h>
#include <stdbool.h>

int main(void){
    int number;
    scanf("%d", &number);

    bool any = false;               // начальное условие 0
    bool all = true;                // начальное условие 1

    while (number)
    {
        int digit =number%10;       // берём последнюю цифру числа
        any = any || (digit < 5);   // если хотя бы одно число < 5 то any будет 1
        all = all && (digit < 5);   // если все числа < 5, то all останется = 1
        number /= 10;               // убирае последюю цифру из числа
    }
    printf("any = %d\n"
           "all = %d\n", any, all);
    
    return 0;
}

/* Программа проверяет 2 отдельных условия: есть ли в числе любая цифра больше 5
и все ли цифры в числе меньше 5.
*/