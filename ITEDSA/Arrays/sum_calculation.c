#include <stdio.h>

int main(){

    int number = 0;
    int sum = 0;
    printf("Sum Calculation\n\n");
    printf("Enter number of elements: ");
    scanf("%d", &number);
    int array[number];

    for(int i = 0; i < number; i++){

        printf("Element %d: ", i);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    

    printf("\nTotal: %d\n", sum);
}