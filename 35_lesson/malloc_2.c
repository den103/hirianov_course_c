#include <stdlib.h>
#include <stdio.h>

int main(void){
    int N;
    printf("Enter size of array to create: ");
    scanf("%d", &N);

    char *A = malloc(N);                  // Просим выделить память в байтах N.

    if (NULL == A){
        printf("OS didn't gave memory. Exit... \n");
        exit(1);
    }

    for (int i = 0; i < N; i++){          // Заполняем память данными.
        A[i] = i;
    }
    
    printf("Array successfully created!\n");
    system("pause");

    return 0;
}

/* Программа показывает пример работы с функцией malloc.
Во время тестов ОС выделяла максимум 2Гб. Если пишешь больше, то 2Гб выделяется и всё. Прога не крашится.
malloc (memory allocation) — это функция стандартной библиотеки C для динамического 
выделения памяти во время выполнения программы. Она объявлена в заголовочном файле <stdlib.h>.
Основное назначение:
Выделяет блок памяти запрошенного размера в байтах в куче (heap) и возвращает указатель на начало этого блока.
 */