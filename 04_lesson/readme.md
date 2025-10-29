## Переполнение (overflow)
**Переполнение** происходит, когда результат операции превышает максимальное значение, которое может хранить тип данных.

### Пример переполнени.

#include <stdio.h>
#include <limits.h>

```c
int main() {
    // Переполнение знаковых целых чисел
    int max_int = INT_MAX;
    printf("INT_MAX = %d\n", max_int);
    printf("INT_MAX + 1 = %d (OVERFLOW!)\n", max_int + 1);
    
    int min_int = INT_MIN;
    printf("INT_MIN = %d\n", min_int);
    printf("INT_MIN - 1 = %d (UNDERFLOW!)\n", min_int - 1);
    
    // Переполнение беззнаковых целых чисел
    unsigned int max_uint = UINT_MAX;
    printf("UINT_MAX = %u\n", max_uint);
    printf("UINT_MAX + 1 = %u (OVERFLOW!)\n", max_uint + 1);
    
    return 0;
}
```

**Вывод:**

INT_MAX = 2147483647  
INT_MAX + 1 = -2147483648 (OVERFLOW!)  
INT_MIN = -2147483648  
INT_MIN - 1 = 2147483647 (UNDERFLOW!)  
UINT_MAX = 4294967295  
UINT_MAX + 1 = 0 (OVERFLOW!)


## Тихое преобразование типов (Silent Type Conversion)

### Неявное преобразование (Implicit Conversion):
```c
#include <stdio.h>

int main() {
    // Преобразование при присваивании
    int i = 3.14;  // double -> int (отбрасывание дробной части)
    printf("int i = 3.14; -> i = %d\n", i);
    
    // Преобразование в выражениях
    double d = 10 / 3;     // int/int -> int, затем int->double
    double d2 = 10.0 / 3;  // double/int -> double
    printf("10 / 3 = %f\n", d);    // 3.000000
    printf("10.0 / 3 = %f\n", d2); // 3.333333
    
    // Преобразование знаковых/беззнаковых
    unsigned int u = 100;
    int s = -10;
    unsigned int result = u + s;  // Опасное преобразование!
    printf("%u + %d = %u (SURPRISE!)\n", u, s, result);
    
    return 0;
}
```