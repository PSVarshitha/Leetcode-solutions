#include <stdio.h>

/*
Test Case 1 - Typical Case
Input:
6
1 2 3 4 5 6
4

Expected Output:
Target found at index: 3


Test Case 2 - Edge Case
Input:
5
1 2 3 4 5
10

Expected Output:
Target not found
*/

int main() {
    int n, target;
    int arr[100];
    int left, right, mid;
    int i;
    int found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            found = mid;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found != -1) {
        printf("Target found at index: %d\n", found);
    } else {
        printf("Target not found\n");
    }

    return 0;
}