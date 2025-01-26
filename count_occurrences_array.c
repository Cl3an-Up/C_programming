/*******************************************************************************
*
* Program: Count occurrences of a value in an array
* 
* Description: Example of counting the occurrences of a value in an array.
*
*
*******************************************************************************/

#include <stdio.h>

int main() {
    int arr[] = {2, 2, 3, 4, 5, 9, 7, 3, 7, 9, 5, 4, 3, 7, 3, 2, 8, 6, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count[10] = {0}; // Assuming numbers are in the range 0-9

    // Count occurrences
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // Display counts
    printf("Element: Count\n");
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d: %d\n", i, count[i]);
        }
    }

    return 0;
}
