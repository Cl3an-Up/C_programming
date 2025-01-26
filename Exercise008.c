#include <stdio.h>
#include <stdbool.h>

/*
Arrays and Pointers
Create a program that:
Accepts an array of integers from the user.
Uses a function to sort the array in ascending order (you can implement the bubble sort algorithm).
Uses another function to find the smallest and largest numbers in the array.
Display the sorted array, smallest, and largest numbers.
*/

//  C Program with Optimized implementation of Bubble sort

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // swapped variable to signal if there is a
        // swap happened in the inner loop
        // initially set to false
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr + j, arr + j + 1);

                // swapped is set to true if the swap is
                // done
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

void findMinMax(int arr[], int n, int *max, int *min)
{
  
    // Base Case: Only single element left
    if (n == 1) {
        *max = arr[0];
        *min = arr[0];
        return;
    }

    // Recursive call for the rest of the array
    findMinMax(arr, n - 1, max, min);

    // Update max and min for the current element
    if (arr[n - 1] > *max)
        *max = arr[n - 1];
    if (arr[n - 1] < *min)
        *min = arr[n - 1];
}

#include <stdio.h>
#include <stdbool.h>

// Function declarations here (keep your swap, bubbleSort, and findMinMax functions)

int main()
{
    int n;

    // Prompt user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare the array with user-specified size
    int arr[n];

    // Input array elements
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min, max;

    // Find min and max
    findMinMax(arr, n, &max, &min);

    printf("Max is %d\n", max);
    printf("Min is %d\n", min);

    // Sort the array
    bubbleSort(arr, n);

    // Display the sorted array
    printf("Sorted array using bubble sort is: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
