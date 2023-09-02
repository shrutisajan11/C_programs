#include<stdio.h>

void main()
{
    char s[100];
    int count=0,i;
    printf("Enter the string:");
    scanf("%s",s);
    for (i=0;s[i]!='\0';i++)
        {
            if (s[i]==' '&&s[i+1]!=' ')
                count++;
        }
    printf("Number of words in the given string are %d",count+1);
}
