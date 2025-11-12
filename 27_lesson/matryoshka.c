#include <stdio.h>

void matryoshka(int n);

int main(void) {
  matryoshka(7);

  return 0;
}

void matryoshka(int n) {
  if (n == 1) {
    printf("The last matryoshka!!!%d\n", n);
  } else {
    printf("Top side of matryoshka %d\n", n);        // Здесь заходим в каждую след-щую ф-цию matryoshka
    matryoshka(n - 1);
    printf("Bottom side of matryoshka %d\n", n);     // Отсюда выходим из каждой след-щей ф-ции matryoshka
  }
}

/* Пример рекурсивной функци.
Вывод:
Top side of matryoshka 7           <- входим в каждую следующую функцию matryoshka
Top side of matryoshka 6
Top side of matryoshka 5
Top side of matryoshka 4
Top side of matryoshka 3
Top side of matryoshka 2
The last matryoshka!!!1
Bottom side of matryoshka 2        <- выходим из каждой следующей функции matryoshka
Bottom side of matryoshka 3
Bottom side of matryoshka 4
Bottom side of matryoshka 5
Bottom side of matryoshka 6
Bottom side of matryoshka 7
*/