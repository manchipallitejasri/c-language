#include <stdio.h>

int main() {
    int a,n, count = 0;
    printf("Enter n value: ");
    scanf("%d", &n);
    for (a = 1; a <= n; a++) {
        if (n % a == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("Prime number");
    } else {
        printf("Not a prime number");
    }

    return 0;
}
