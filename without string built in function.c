#include <stdio.h>

int main() {
    char str1[100], str2[100], com[100], rev[100];
    int i, j, len = 0;

    printf("Enter first string:");
    gets(str1);

    printf("Enter second string:");
    gets(str2);

    for(i = 0; str1[i] != '\0'; i++) {
        len++;
    }

    printf("\nLength of first string = %d", len);

    for(i = 0; i < len; i++) {
        com[i] = str1[i];
    }

    for(j = 0; str2[j] != '\0'; j++) {
        com[i] = str2[j];
        i++;
    }

    com[i] = '\0';

    printf("\nConcatenated string = %s", com);

    int k = 0;
    for(i = len - 1; i >= 0; i--) {
        rev[k] = str1[i];
        k++;
    }

    rev[k] = '\0';

    printf("\nReverse string = %s", rev);

    return 0;
}
