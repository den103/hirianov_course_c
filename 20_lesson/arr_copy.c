#include <stdio.h>
#define N 10

void print_array(int A[]){        // Функция печати массивов
    for(int i = 0; i < N; ++i)
        printf("%3d", A[i]);
    printf("\n");
}

int main(void){
    int A[N] = {0, 10 ,20, 30, 40, 50, 60, 70, 80, 90};
    int B[N] = {0};

    for (int i = 0; i < N; ++i) {
        B[i] = A[i];
    }

    print_array(A);
    print_array(B);
    
    return 0;
}

/* Программа копирует числа из массива A в массив B.

Вывод: 0 10 20 30 40 50 60 70 80 90
       0 10 20 30 40 50 60 70 80 90
*/