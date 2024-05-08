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

    menu();

    return 0;
}
