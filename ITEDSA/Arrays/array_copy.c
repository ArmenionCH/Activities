#include <stdio.h>

int main(){
    
    int number = 0;
    printf("Array Copy\n\n");
    printf("Enter number of elements: ");
    scanf("%d", &number);
    int array[number];

    for(int i = 0; i < number; i++){

        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }



    printf("\nOriginal array element/s: \n");

    for(int i = 0; i < number; i++){

        printf("Element %d: %d\n",i , array[i]);
    }



    int copyofArray[number];
    printf("\nCopying...\n");

    for(int i = 0; i < number; i++){

        copyofArray[i] = array[i];
    }



    printf("\nCopied array element/s: \n");

    for(int i = 0; i < number; i++){

        printf("Element %d: %d\n",i , copyofArray[i]);
    }
}