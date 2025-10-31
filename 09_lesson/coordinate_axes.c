#include <stdio.h>

int main(void){
    int x, y;
    scanf("%d%d", &x, &y);

    if (y > 0)
        if (x > 0)
            printf("1-st quarter.\n");
        else
            printf("2-nd quarter.\n");
    else
        if (x < 0)
            printf("3-rd quarter.\n");
        else
            printf("4-th quarter.\n");

    return 0;
}

// Нет обработки случая, когда точка лежит на оси.
// Используется метод дихотомии (деления на 2 части). Плюсы такого подхода - скорость выполнения, простота.