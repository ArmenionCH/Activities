#include <stdio.h>

int main(){

    int number = 0;
    printf("Count Duplicate Elements\n\n");
    printf("Enter number of elements : ");
    scanf("%d", &number);
    int array[number];

    for(int i = 0; i < number; i++){

        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }


    int count = 0;
    printf("\nFinding duplicate elements...\n\n");

    for(int i = 0; i < number; i++){
        for(int j = i + 1; j < number; j++){
            if(array[i] == array[j]){
                count++;
                break;
            }
        }
    }


    
    printf("Number of duplicate elements: %d\n", count);
}