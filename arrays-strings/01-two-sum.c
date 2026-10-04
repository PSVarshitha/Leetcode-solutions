#include <stdio.h>

/*
Test Case 1 - Typical Case
Input:
5
2 7 11 15 3
9

Expected Output:
Indices: 0 and 1


Test Case 2 - Edge Case
Input:
2
3 3
6

Expected Output:
Indices: 0 and 1
*/

int main() {
    int n, target;
    int nums[100];
    int i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Indices: %d and %d\n", i, j);
                return 0;
            }
        }
    }

    printf("No two numbers found.\n");

    return 0;
}