#include <stdio.h>

int main()
{
    char a[100];
    int i;

    printf("enter a sentence:\n");
    fgets(a, 100, stdin);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", a[i]);
        }
    }

    return 0;
}
