#include<stdio.h>
void main()
{
    char str[50],revstr[50];
    int i=0,j=0;
    printf("Enter a string\n");
    gets(str);
    while(str[i]!='\0')
    {
        i++;
    }
    while (i>0)
    {
        revstr[j]=str[i-1];
        i--;
        j++;
    }
    revstr[j]=='\0';
    if (revstr==str)
        printf("%s is a palindrome string",str);
    else
        printf("%s is not a palindrome string",str);
}
