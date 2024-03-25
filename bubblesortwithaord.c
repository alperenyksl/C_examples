#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int *array, char order);

int main() {
    srand(time(NULL));
    char order;
    int array[10];
    for(int i = 0; i < 10; i++) {
        array[i] = rand() % 201 - 100;
    }
    printf("Please select order type (a or d): ");
    scanf("%c", &order);
    bubbleSort(array, order);
    printf("\nSorted array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

void bubbleSort(int *array, char order) {
    int temp;
    int size = 10; // Array size is fixed to 10

    if (order == 'a') {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    } else if (order == 'd') {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (array[j] < array[j + 1]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }
}
