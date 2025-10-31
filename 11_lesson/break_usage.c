#include <stdio.h>

int main(void){

    while (1)
    {
        int x;
        scanf("%d", &x);
        if (x == 0) break;
        printf("Number %d in hexadecimal is %X.\n", x, x);
    }
    
    return 0;
}

// Пример правильного использования оператора break.