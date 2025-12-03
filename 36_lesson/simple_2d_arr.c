#include <stdio.h>
#include <stdlib.h>

#define MATRIX_HEIGHT 4
#define MATRIX_WIDTH 5

void static_array_print(int A[][MATRIX_WIDTH], size_t N) {
  for (size_t i = 0; i < N; i++) {
    for (int j = 0; j < MATRIX_WIDTH; j++) {
      printf("%*d", 5, A[i][j]);
    }
    printf("\n");
  }
}

void static_array_test(size_t N) {
  int A[N][MATRIX_WIDTH];
  int x = 1;
  for (size_t i = 0; i < N; i++) {
    for (int j = 0; j < MATRIX_WIDTH; j++) {
      A[i][j] = x;
      x += 1;
    }
  }

  static_array_print(A, N);
}

int main(void){
    static_array_test(MATRIX_HEIGHT);

    return 0;
}

/* Программа является примером двумерного VLA (Variable Length Array) массива.
Этот массив создаётся на стеке. Живёт только пока работает функция.
*/