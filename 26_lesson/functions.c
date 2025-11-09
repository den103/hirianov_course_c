#include <stdio.h>

void A();      // Объявление функции
void B();      // Объявление функции
void C();      // Объявление функции

int main(void){
    printf("main() called.\n");
    A();
    printf("main() returns.\n");

    return 0;
}

void A(){                                // Определение функции
    printf("   A() called.\n");
    B();
    printf("   A() returns.\n");
}

void B(){                                // Определение функции
    printf("      B() called.\n");
    C();
    printf("      B() returns.\n");
}

void C(){                                // Определение функции
    printf("         C() called.\n");
    printf("         C() returns.\n");
}

/* Программа показывает пример объявления, определения и вложенные вызовы функций.
Реализацию стека вызовов функций при выполнении кода можно посмотреть, запустив отладку.
Там, слева есть вкладка STACK.
*/