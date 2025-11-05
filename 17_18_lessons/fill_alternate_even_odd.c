#include <stdio.h>

#define N 7

int main(void) {
  int A[N] = {0};

  int first_group = 0;
  int second_group = (N + 1) / 2;

  for (int i = 0; i < N; i++) {
    A[i] = (i % 2 == 0) ? first_group++ : second_group++;
  }

  for (int i = 0; i < N; i++) {
    printf(" %d ", A[i]);
  }

  return 0;
}

/* Программа реализует алгоритм Perfect Shuffle для чётных и нечётных чисел больше 0.
int second_group = (N + 1) / 2; - здесь для чётных будет работать деление на цело с отбрасыванием остатка,
а для нечётных срабатывает приведение к чётному числу вверх.
*/