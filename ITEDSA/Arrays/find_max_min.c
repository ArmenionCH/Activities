#include <stdio.h>

int main(){

    int number = 0;
    printf("Find Maximum & Minimum\n\n");
    printf("Enter number of elements: ");
    scanf("%d", &number);
    int array[number];

    for(int i = 0; i < number; i++){

        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }



    int max = array[0];
    int min = array[0];
    printf("\nFinding maximum and minimum element/s...\n\n"); 

    for(int i = 1; i < number; i++){

        if(array[i] > max) max = array[i];
        if(array[i] < min) min = array[i];
    }



    printf("\nMaximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

}