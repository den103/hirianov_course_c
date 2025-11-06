#include <stdio.h>
#define N 10

void print_array(int A[]){           // Функция печати массивов
    for(int i = 0; i < N; ++i)
        printf("%3d", A[i]);
    printf("\n");
}

int main(void){
    int A[N] = {0, 10 ,20, 30, 40, 50, 60, 70, 80, 90};
    int B[N] = {0};

    for (int i = 0; i < N; ++i) {
        B[i] = A[N - i - 1];         // В ячейку В[0] пишем данные из A[10 - 0 - 1] (9) 
    }

    print_array(A);
    print_array(B);
    
    return 0;
}

/* Программа копирует массив A в массив B в реверсивном порядке.

Вывод:  0 10 20 30 40 50 60 70 80 90
       90 80 70 60 50 40 30 20 10  0
*/  