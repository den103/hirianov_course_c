#include <stdio.h>

int main (int argc, char* argv[]){     // всместо этих аргументов нужно поставить void если они не используются
    int start, stop, step;

    printf("%s\n", argv[0]);          // используем аргументы argv
    printf("%d\n", argc);             // используем аргументы argc

    printf("Generator of progression.\n"
           "Enter start, stop, step:");
    scanf("%d%d%d", &start, &stop, &step);

    int sign = (step > 0)? +1: -1;    // Определяем знак переменной step
    int x = start;
    while (sign*x < sign*stop)        // переключаем возрастающую-убывающую прогрессию
    {
        printf("x = %d\n", x);
        x += step;
    }

    printf("After: x = %d\n", x);

    return 0; 
}