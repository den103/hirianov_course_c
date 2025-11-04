#include <stdio.h>

// Глобальная переменная - хранит текущее состояние
int current_sum = 0;  // ← БАЗИС: начальное состояние

// Функция для добавления нового элемента
void add_to_sum(int new_value) {
    printf("Adding %d. Was: %d, now: %d\n", 
           new_value, current_sum, current_sum + new_value);
    current_sum = current_sum + new_value;  // ← ИНДУКТИВНЫЙ ПЕРЕХОД
}

// Функция для получения текущей суммы
int get_current_sum() {
    return current_sum;
}

// Функция для сброса суммы
void reset_sum() {
    current_sum = 0;
    printf("Reset sum to 0\n");
}

int main() {
    int numbers[] = {3, 5, 2, 8};
    int size = 4;
    
    printf("=== Inductive approach ===\n");
    
    // Первое заполнение
    reset_sum();
    for(int i = 0; i < size; i++) {
        add_to_sum(numbers[i]);
    }
    printf("Result after first fill: %d\n\n", get_current_sum());
    
    // Добавляем ещё один элемент - не пересчитываем всё заново!
    printf("Adding new element 10:\n");
    add_to_sum(10);
    printf("Result after adding 10: %d\n\n", get_current_sum());
    
    // Добавляем ещё элемент - продолжаем с того же места
    printf("Adding new element 7:\n");
    add_to_sum(7);
    printf("Result after adding 7: %d\n\n", get_current_sum());
    
    // Можем в любой момент получить текущую сумму
    printf("Current sum without recalculation: %d\n", get_current_sum());
    
    return 0;
}

// Программа показывает пример индуктивного подхода сложения чисел.