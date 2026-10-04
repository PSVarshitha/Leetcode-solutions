#include <stdio.h>
#include <string.h>

/*
Test Case 1 - Typical Case
Input:
hello

Expected Output:
Reversed string: olleh


Test Case 2 - Edge Case
Input:
a

Expected Output:
Reversed string: a
*/

int main() {
    char str[100];
    int i, j;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    i = 0;
    j = strlen(str) - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}