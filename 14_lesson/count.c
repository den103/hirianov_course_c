#include <stdio.h>

int main(void){
    int x;
    scanf("%d", &x);

    int n = 0;
    while (x)
    {
 //       int digit = x%10;
        n = n + 1;     // добавляем по 1 к n при каждой итерации
        x = x/10;      // делим число которое ввели на 10 при каждой итерации пока не станет 0
    }
    printf("result = %d", n);

    return 0;
}

// Программы делает подсчёт цифр в числе.