#include <stdio.h>

int main(){

    int number = 0;
    printf("Print Unique Elements\n\n");
    printf("Enter number of elements : ");
    scanf("%d", &number);
    int array[number];

    for(int i = 0; i < number; i++){

        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }


    int count = 0;
    printf("\nFinding and printing unique elements...\n\n");
    
    for(int i = 0; i < number; i++){
        count = 0;
        for(int j = 0; j < number; j++){
            if(array[i] == array[j]){
                count++;
            }
        }
        if(count == 1){
            printf("Element %d: %d\n",i , array[i]);
        } 
    }

}
