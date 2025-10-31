#include <stdio.h>

int main(void){
    int x, y;
    scanf("%d%d", &x, &y);

    if (y > 0 && x > 0)
        printf("1-st quarter.\n");
    else if (y > 0 && x < 0)
        printf("2-nd quarter.\n");
    else if (y < 0 && x > 0)
        printf("3-rd quarter.\n");
    else if (y < 0 && x > 0)
        printf("4-th quarter.\n");
    else
        printf("Point is on axis.\n");

    return 0;
}

// Каскадный стиль условий
// Плюсы - удобство написания. Из минусов - ниже скорость выполнения.