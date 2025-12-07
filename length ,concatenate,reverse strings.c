#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int length;

    printf("Enter a string: ");
    scanf("%s", a);

    printf("Enter b string: ");
    scanf("%s", b);

    length = strlen(a);
    printf("\n%d", length);

    strcat(a, b);
    printf("\n%s", a);

    strrev(b);
    printf("\n%s", b);

    return 0;
}
