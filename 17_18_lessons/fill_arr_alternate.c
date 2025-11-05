#include <stdio.h>

#define N 6

// *** Класический алгоритм Perfect Shuffle для массивов с чётным колличеством
// элементов. ***

/* int main(void){
    int A[N] = {0};

    for (int i = 0; i < N/2; i++){     // Проходим по массиву
        A[2*i] = i;
        A[2*i+1] = N/2 + i;
    }

    for (int i = 0; i < N; i++){
        printf(" %d ", A[i]);          // Печатаем элементы массива
    }

    return 0;
}
*/

// ***Более понятное написание этого алгоритма***

int main(void) {
  int A[N] = {0};

  int first_group = 0;
  int second_group = N / 2;

  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {             // Четные позиции - из первой группы
      A[i] = first_group++;       // Постфиксный инкремент, сначала делаем, затем увеличиваем на 1
    } else {                      // Нечетные позиции - из второй группы
      A[i] = second_group++; 
    }
  }

  for (int i = 0; i < N; i++) {
    printf(" %d ", A[i]);         // Печатаем элементы массива
  }

  return 0;
}

// Вывод: 0  3  1  4  2  5
// A[i] = (i % 2 == 0) ? first_group++ : second_group++;  Вместо if можно так.