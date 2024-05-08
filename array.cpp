#include "array.h"
#include <stdio.h>
#include <stdlib.h>

void printArray(int *array){
    for (int i = 0; i < SIZE; ++i){
        printf("*(array + %d) = %d\n", i, *(array + i));
    }
}
void inputValues(int *array){
    printf("Input values to array... \n");
    for (int i = 0; i < SIZE; ++i){
        printf("array[%d] \n", i);
        scanf("%d", array + i);
    }
}