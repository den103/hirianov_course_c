#include <stdio.h>
#include <time.h>

static int cache[100] = {0};    // Выделяем память под числа фибоначчи

int fib(int n){
    if (n <= 1) return n;       // Если 0 или 1, то их и возвращаем
    if (cache[n] == 0){         // Далее, если элемент массива cache равен 0, то...
        cache[n] = fib(n - 1) + fib(n - 2);    // Вычисляем чило фибоначчи и потом его возвращаем
    }
    return cache[n];
}

int main (void){
    for (int n = 1; n < 50; n += 1){
        clock_t time_1 = clock();
        int result = fib(n);
        clock_t time_2 = clock();
        int delta_ms = (time_2 - time_1) * 1000/CLOCKS_PER_SEC;         // Считаем время между вычислениями чисел фибоначчи
        printf("fib(%d) = %d, \t time = %d ms\n", n, result, delta_ms);
    }

    return 0;
}

/* Программ реализует вычисление чисел фибоначчи с помощью динамического программирования
сверху вниз. Используется приём кеширования результата и вычисление с помощью рекурсии.
При выводе чисел, отрицательные числа в конце появляются т.к. не хватает размера int.
*/