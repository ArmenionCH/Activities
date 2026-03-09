#include <stdio.h>

int main(){

    int number = 0;
    printf("Frequency of Array Elements\n\n");
    printf("Enter number of elements: ");
    scanf("%d", &number);
    int array[number];

    for(int i = 0; i < number; i++){

        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }



    int visited[number];
    printf("\nFinding frequency of elements...\n\n");
    
    for(int i = 0; i < number; i++){

        visited[i] = 0;
    }

    

    printf("\nThe frequency of all elements of an array :\n");

    for(int i = 0; i < number; i++){

        if(visited[i] == 1) continue;
        int count = 1;

        for(int j = i+1; j < number; j++){

            if(array[i] == array[j]){

                count++;
                visited[j] = 1;
            }
        }



        printf("%d occured %d times\n", array[i], count);
    }
}