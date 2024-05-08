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
int findMinValue(int *array){
    int min = *array;
    for (int i = 0; i < SIZE; ++i){
        if(*(array + i) < min){
        min = *(array + i);
        }
    }
    return min;
}
int findMaxValue(int *array){
    int max = *array;
    for (int i = 0; i < SIZE; ++i){
        if(*(array + i) > max){
            max = *(array + i);
        }
    }
    return max;
}