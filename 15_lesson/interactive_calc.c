#include <stdio.h>

// Глобальная переменная - хранит текущее состояние
int current_sum = 0;  // ← БАЗИС: начальное состояние

// Функция для добавления нового элемента
void add_to_sum(int new_value) {
    printf("Adding %d. Was: %d, now: %d\n", 
           new_value, current_sum, current_sum + new_value);
    current_sum = current_sum + new_value;
}

// Функция для вычитания значения
void subtract_from_sum(int value) {
    printf("Subtracting %d. Was: %d, now: %d\n", 
           value, current_sum, current_sum - value);
    current_sum = current_sum - value;
}

// Функция для получения текущей суммы
void show_current_sum() {
    printf("Current value: %d\n", current_sum);
}

// Функция для сброса суммы
void reset_sum() {
    printf("Reset. Was: %d, now: 0\n", current_sum);
    current_sum = 0;
}

// Функция для отображения меню
void print_menu() {
    printf("\n=== MENU ===\n");
    printf("1 - Show current value\n");
    printf("2 - Add number\n");
    printf("3 - Subtract number\n");
    printf("4 - Reset value\n");
    printf("0 - Exit program\n");
    printf("Choose command: ");
}

int main() {
    int command;
    int value;
    
    printf("=== INDUCTIVE CALCULATOR ===\n");
    printf("Current value initialized as: %d\n", current_sum);
    
    while(1) {  // Бесконечный цикл, пока не введем 0
        print_menu();
        scanf("%d", &command);
        
        switch(command) {
            case 0:
                // Выход из программы
                printf("Exiting program. Final value: %d\n", current_sum);
                return 0;
                
            case 1:
                // Показать текущее значение
                show_current_sum();
                break;
                
            case 2:
                // Добавить число
                printf("Enter number to add: ");
                scanf("%d", &value);
                add_to_sum(value);
                break;
                
            case 3:
                // Вычесть число
                printf("Enter number to subtract: ");
                scanf("%d", &value);
                subtract_from_sum(value);
                break;
                
            case 4:
                // Обнулить значение
                reset_sum();
                break;
                
            default:
                printf("Error: unknown command! Try again.\n");
                break;
        }
    }
    
    return 0;
}

// Программа калькулятора с простым интерфейсом который может складывать и вычитать числа.
// Эта программа является примером применения индуктивного подхода.