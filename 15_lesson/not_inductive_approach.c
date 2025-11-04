#include <stdio.h>

// Функция ВСЕГДА начинает вычисление с нуля
int sum(int arr[], int n) {
    int result = 0;
    printf("Starting sum calculation from zero\n");
    
    for(int i = 0; i < n; i++) {
        printf("Adding arr[%d] = %d. Was: %d, now: %d\n", 
               i, arr[i], result, result + arr[i]);
        result += arr[i];
    }
    
    return result;
}

int main() {
    int numbers[] = {3, 5, 2, 8};
    int size = 4;
    
    printf("=== NON-inductive approach ===\n");
    
    // Каждый вызов функции - независимое вычисление
    int sum1 = sum(numbers, size);
    printf("First calculation: %d\n\n", sum1);
    
    int sum2 = sum(numbers, size);
    printf("Second calculation: %d\n\n", sum2);
    
    // Даже если массив не менялся, всё равно пересчитываем полностью
    int sum3 = sum(numbers, size);
    printf("Third calculation: %d\n", sum3);
    
    return 0;
}

// Программа показывает не индуктивный подход к сложению чисел.