#include <stdio.h>

void hanoi(int num_of_disks, int start, int target){
    if (num_of_disks == 1){
        printf("Move disk 1 from pin %d to %d.\n", start, target);         // Если диск 1, то печетаем всего одну инструкцию
    }
    else{
        int tmp = 6 - start - target;                                      // Вычисляем номер штырька tmp
        hanoi(num_of_disks - 1, start, tmp);                               // Перекладываем n-1 часть пирамиды на tmp
        printf("Move disk %d from pin %d to %d.\n", num_of_disks, start, target);  // Перекладываем самый нижний, n-ный, диск на target
        hanoi(num_of_disks - 1, tmp, target);                              // Перекладываем n-1 часть пирамиды c tmp на target
    }
}

int main(void){
    hanoi(3, 1, 3);

    return 0;
}

// Прогармма выдаёт решение головоломки ханойсие башни с произвольным количеством дисков и 3мя штырьками.
// Ниже та же самая программа, только без вычисления tmp штырька.

/*
#include <stdio.h>

void hanoi(int num_of_disks, int start, int target, int tmp){
    if (num_of_disks == 1){
        printf("Move disk 1 from pin %d to %d.\n", start, target);
    }
    else{
        hanoi(num_of_disks - 1, start, tmp, target);
        printf("Move disk %d from pin %d to %d.\n", num_of_disks, start, target);
        hanoi(num_of_disks - 1, tmp, target, start);
    }
}

int main(void){
    hanoi(3, 1, 3, 2);

    return 0;
}
*/