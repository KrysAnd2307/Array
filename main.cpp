#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void menu(){
    printf("1 - Input Values \n");
    printf("2 - Print Array \n");
    printf("3 - Find Maximum Value \n");
    printf("4 - Find Minimum Value \n");
    printf("5 - Calculate Average \n");
    printf("6 - Display All Results \n");
    printf("7 - Stop program \n");
    printf("Select an option: \n");
}

int main() {
    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int choice = 0;
    while(choice != 7){
        menu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                inputValues(array);
                break;
            case 2:
                printArray(array);
                break;
            case 3: {
                int max = findMaxValue(array);
                printf("Max = %d\n", max);
                break;
            }
            case 4: {
                int min = findMinValue(array);
                printf("Min = %d\n", min);
                break;
            }
            case 5: {
                float average = calcAverage(array);
                printf("Average Value = %f\n", average);
                break;
            }
            case 6: {
                int max = findMaxValue(array);
                int min = findMinValue(array);
                int average = calcAverage(array);
                displayResults(max, min, average);
                break;
            }
            case 7:
                printf("Program ended!!!\n");
                break;
            default:
                printf("Select the correct option!!! \n");
                break;
        }
    }


    return 0;
}
