#include <stdio.h>

void print_number_factors(int x){
    printf("Number factors: ");
    int divisor = 2;                  // делитель в начале равен 2
    while (x != 1)                    // пока x не равен 1 запускаем цикл
    {
        if (x%divisor == 0){          // проверяем остаток от деления
            printf("%d ", divisor);   // если остаток = 0, то печатаем делитель
            x /= divisor;             // делим x на делитель и присваиваем в x
        }
        else
            divisor += 1;             // если остаток не = 0, то увеличиваем делитель на 1
    }
    printf("\n");
}

int main(void){
    int x;
    printf("Enter number to factorize:");
    scanf("%d", &x);                   // вводим наше число с клавы
    print_number_factors(x);           // запускаем ф-цию определения делителей с нашим числом в параметрах

    return 0;
}

/* Так же код для определения делителей можно записать и так.
while (x != 1)
    {
        while (x%divisor == 0){
            printf("%d ", divisor);
            x /= divisor;
        }
        divisor += 1;
    }
*/