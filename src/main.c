#include <stdio.h>
#include "../MyLibrary.h"

int main(){
    printf("Main init...\n");
    myLibFunc();

    char* vector = NULL;
    allocateArrPtr(&vector, 10, 'M');

    printf("all Values alocated ptr vector: ");
    printf("[");
    for(int i=0; i < 10; i++){
        if(i != 10 - 1){
            printf("%c, ", vector[i]);
        } else{
            printf("%c", vector[i]);
        }
    }
    printf("]\n");
}