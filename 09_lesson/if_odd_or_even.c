#include <stdio.h>

int main(void){
    int x; // если не писать scanf который ниже, то надо написать int x = 1; чтобы в while не прилетал мусор
    printf("Enter some number: ");
    scanf("%d", &x);
    while (x != 0)
    {
        if(x%2 == 0)
            printf("Number %d is even.\n", x);
        else
            printf("Number %d is odd.\n", x);
        scanf("%d", &x);
    }

    return 0;
}