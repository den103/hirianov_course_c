#include <stdbool.h>
#include <stdio.h>

#define ALLOCATE_SIZE 1000

int input_array(int A[], int max_size) {    // Функция для, относительно безопасного, ввода числа.
  int top = 0;                              // Переменная для подсчёта количества элементов массива.

  while (true) {                            // Цикл пока не будет введён 0 или длина массива (top) не превысит 1000.
    int x;
    scanf("%d", &x);
    if (x == 0 || top == max_size)
      break;
    A[top] = x;
    top++;
  }
  return top;                                // Возвращаем top.
}

void print_array(int A[], int N) {           // Печать массива A[]
  for (int i = 0; i < N; i++) {
    printf("%3d ", A[i]);
  }
  printf("\n");
}

void insert_sort(int A[], int N) {           // Функция реализует сортировку.
  for (int i = 1; i < N; i++) {              // Перемещаемся по массиву A[] вправо с 1го индекса.
    int k = i;
    while (k > 0 && A[k - 1] > A[k]) {       // Сравниваем соседние числа в массиве A[], смещаясь влево.
      int tmp = A[k - 1];
      A[k - 1] = A[k];
      A[k] = tmp;
      k -= 1;
    }
  }
}

int main(void) {
  printf("Enter numbers: ");
  int A[ALLOCATE_SIZE];
  int N;

  N = input_array(A, ALLOCATE_SIZE);          // В N пишем количество элементов массива A[] (top).
  insert_sort(A, N);                          // Запускаем сортировку.
  print_array(A, N);                          // Печатаем отсортированный массив.

  return 0;
}

/* Программа реализует алгоритм сортировки вставками.

*/