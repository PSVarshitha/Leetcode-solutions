#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char str[100][100];
    char prefix[100];

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    strcpy(prefix, str[0]);

    for (i = 1; i < n; i++) {
        j = 0;

        while (prefix[j] != '\0' && str[i][j] != '\0' &&
               prefix[j] == str[i][j]) {
            j++;
        }

        prefix[j] = '\0';

        if (prefix[0] == '\0') {
            break;
        }
    }

    printf("Longest Common Prefix: %s\n", prefix);

    return 0;
}