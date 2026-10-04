#include <stdio.h>

/*
Test Case 1 - Typical Case
Input:
5
0 1 0 3 12

Expected Output:
Array after moving zeroes: 1 3 12 0 0


Test Case 2 - Edge Case
Input:
4
0 0 0 0

Expected Output:
Array after moving zeroes: 0 0 0 0
*/

int main() {
    int n;
    int arr[100];
    int i, j = 0;
    int temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    printf("Array after moving zeroes: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}