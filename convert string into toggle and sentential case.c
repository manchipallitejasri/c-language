#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[200], toggle[200], sentence[200];

    printf("Enter a string: ");
    fgets(str, 200, stdin);

    str[strcspn(str, "\n")] = '\0';
    strcpy(toggle, str);
    for (int i = 0; toggle[i] != '\0'; i++)
    {
        if (islower(toggle[i]))
            toggle[i] = toupper(toggle[i]);
        else if (isupper(toggle[i]))
            toggle[i] = tolower(toggle[i]);
    }
    strcpy(sentence, str);
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        sentence[i] = tolower(sentence[i]);
    }

    int i = 0;
    while (sentence[i] == ' ')
    {
        i++;
    }

    if (sentence[i] != '\0')
    {
        sentence[i] = toupper(sentence[i]);
    }

    printf("\nToggle case: %s", toggle);
    printf("\nSentential case: %s", sentence);

    return 0;
}
