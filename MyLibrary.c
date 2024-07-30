#include <stdio.h>
#include <stdlib.h>

char *allocateArr(size_t size, int value);

void myLibFunc(){
    printf("My lib func message start...! \n");

    int sizeArr = 6;
    char* pArr = allocateArr(sizeArr, 45);

    printf("[");
    for(int i=0; i < sizeArr; i++){
        if(i != sizeArr - 1){
            printf("%d, ", pArr[i]);
        } else{
            printf("%d", pArr[i]);
        }
    }
    printf("]\n");
}

char *allocateArr(size_t size, int value){
    char* arr = (char*) malloc(size * sizeof(char));
    for(int i=0; i<size; i++){
        arr[i] = value;
    }
    return arr;
}

void allocateArrPtr(char** arr, size_t size, char fillValue){
    *arr = (char*) malloc(size * sizeof(char));
    
    if(*arr != NULL){
        for(int i=0; i<size; i++){
            *(*arr + i) = fillValue;
        }
    }
}