#include <stdio.h>

int main(){

    int number = 0;
    printf("Store & Print\n\n");
    printf("Enter number of elements : ");
    scanf("%d", &number);
    int array[number];

    for(int i = 0; i < number; i++){

        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }



    printf("\nElements in the array: \n\n");
    for(int i = 0; i < number; i++){

        printf("%d ", array[i]);
    }
}