#include <stdio.h>

void sortingnumbers() {
    int i, j, n, temp;
    int arr[100];

    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

 //   return 0;
}
