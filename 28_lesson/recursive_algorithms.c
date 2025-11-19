#include <stdio.h>

int factorial(int n) {
  if (0 == n)                    // Лайфхак
    return 1;                    // Факториал 0 будет 1
 // Здесь можно даже не писать else. Всё равно будет выполняться либо первый return, либо второй
  return factorial(n - 1) * n;   // Фычисляем факториал рекурсией
}

int gcd(int a, int b){           // gcd - grand common divider (НОД)
    if (0 == b)
        return a;                // Если b = 0, то НОД будет a
    return gcd(b, a%b);          // Если b не равен 0, то вычисляем gcd
}

double fast_power(double x, int y){
    if (0 == y)
        return 1;                        // Если возводим в 0 степень, то результат будет 1
    if (y%2 == 1)
        return x*fast_power(x, y - 1);   // Если число степени нечётное, то обычный алгоритм возведения
    else
        return fast_power(x * x, y/2);   // Если чило степени чётное, то быстрое возведение
}

int fib(int m){
    if (m <= 1)
        return m;
    return fib(m - 1) + fib(m - 2);
}

int main (void){
    int n, a, b, x, y, m;
    printf("Enter a number to calculating the Factorial: ");      // вводим число для факториала
    scanf("%d", &n);
    
    printf("Enter numbers to calculate the GCD: ");               // вводим 2 числа для вычисления НОД
    scanf("%d%d", &a, &b);

    printf("Enter the number and the degree to which it should be raised: ");   // вводим число которое надо возвести и число степени
    scanf("%d%d", &x, &y);

    printf("Enter number to calculate the Fibonacci number: ");    // вводим число для вычисления числа Фибоначчи 1,1,2,3,5,8,13,21,…
    scanf("%d", &m);
    
    printf("factorial(%d) = %d\n", n, factorial(n));
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    printf("fast_power(%d, %d) = %lf\n", x, y, fast_power(x, y));       // Здесь надо учитывать формат вывода %lf т.к. double
    printf("Fibonacci number(%d) = %d\n", m, fib(m));
}

/* Алгоритмы решают следующие задачи:
factorial - вычисляет факториал числа n (5! = 1×2×3×4×5)
gcd - вычисляет НОД 2х чисел a и b (наибольший общий делитель)
fast_power - вычисляет возведение числа x в заданную степень y
fib - вычисляет чило Фибоначчи числа m (1,1,2,3,5,8,13,21,…)
*/