#include <stdio.h>
#include <time.h>

int fib_bottom_up(int n){
    int fib[n + 1];

    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++){
        fib[i] = fib[i - 1] + fib[i - 2];     // Вычисляем числа фибоначчи без рекурсии
    }
    return fib[n];
}

int main (void){
    for (int n = 1; n < 50; n += 1){
        clock_t time_1 = clock();
        int result = fib_bottom_up(n);
        clock_t time_2 = clock();
        int delta_ms = (time_2 - time_1) * 1000/CLOCKS_PER_SEC;         // Считаем время между вычислениями чисел фибоначчи
        printf("fib(%d) = %d, \t time = %d ms\n", n, result, delta_ms);
    }

    return 0;
}

/* Программа реализует вычисление чисел фибоначчи с применением динамического программирования
методом снизу вверх.
Вычисление происходит без применения рекурсии, просто в цикле.
При выводе чисел, отрицательные числа в конце появляются т.к. не хватает размера int.
*/