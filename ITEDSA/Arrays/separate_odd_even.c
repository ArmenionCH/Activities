#include <stdio.h>

int main(){

    int number = 0;
    printf("Separate Odd & Even Arrays\n\n");
    printf("Enter number of elements: ");
    scanf("%d", &number);
    int array[number];

    for(int i = 0; i < number; i++){

        printf("Element %d: : ", i);
        scanf("%d", &array[i]);
    }



    printf("\nThe Even element/s are :\n");

    for(int i = 0; i < number; i++){

        if(array[i] % 2 == 0){

            printf("%d ", array[i]);
        }
    }



    printf("\nThe Odd element/s are :\n");

    for(int i = 0; i < number; i++){

        if(array[i] % 2 != 0){

            printf("%d ", array[i]);
        }
    }

    printf("\n");

}