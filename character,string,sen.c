#include<stdio.h>
int main()
{char a;
char word[20];
char sentance[200];
printf("\enter a character");
scanf("%c",&a);
printf("\n enter a word");
scanf("%s",&word);
printf("\nenter a sentance");
scanf("%[^\n]",&sentance);
printf("\nthe letter is %c\nthe word is %s\nthe sentance is%s",a,word,sentance);
return 0;
}
