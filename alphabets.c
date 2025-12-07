#include <stdio.h>

int main() {
    char str[1000];
    int i;
    int upper = 0, lower = 0, digit = 0, space = 0, special = 0;

    // Input string
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Counting
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else if (str[i] == ' ')
            space++;
        else
            special++;
    }

    // Output
    printf("Uppercase count = %d\n", upper);
    printf("Lowercase count = %d\n", lower);
    printf("Digit count     = %d\n", digit);
    printf("Space count     = %d\n", space);
    printf("Special count   = %d\n", special);

    return 0;
}
