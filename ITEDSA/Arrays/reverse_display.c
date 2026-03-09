#include <stdio.h>

int main(){

    int number = 0;
    printf("Reverse Display\n\n");
    printf("Enter number of elements: ");
    scanf("%d", &number);
    int array[number];

    for(int i = 0; i < number; i++){

        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }



    printf("\nNormal Output: \n\n");

    for(int i = 0; i < number; i++){

        printf("%d\n", array[i]);
    }



    printf("\nReversed Output: \n\n");

    for(int i = number - 1; i >= 0; i--){

        printf("%d\n", array[i]);
    }
}