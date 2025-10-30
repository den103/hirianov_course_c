#include <stdio.h>

int main(void){
    double x;
    x = 1/2;                      // Здесь будет 0 т.к. x(double) = 1(int) / 2(int)    
    printf("x = 1/2: %f\n", x);

    double y;
    y = 1/2.0;                    // y = 0.5 т.к. y(double) = 1(int) / 2.0(double) Можно написать 2.0 как 2.
    printf("y = 1/2.0: %f\n", y); // Так работает приведение типов. Достаточно чтобы 1 из элементов был double.

    int a = 1;
    int b = 2;
    double c;
    c = a/(double)b;              // Явное приведение типов. Достаточно чтобы 1 из элементов был double.
    printf("c = a/b: %f\n", c);


    return 0;
}