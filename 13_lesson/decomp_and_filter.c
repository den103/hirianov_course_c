#include <stdio.h>

int main(void){
    int x;
    printf("Number to split on digits: ");
    scanf("%d", &x);
    while (x){
        int digit = x%10;
        if (digit%2 == 1)
            printf("%d", digit);
        x /= 10;
    }

    return 0;
}

// Программа разделяет введённое число на цифры и фильтрует по чётности.
