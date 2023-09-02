#include <stdio.h>
#include <string.h>
void main()
{
    char c[20];
    int i,j;
    printf("Enter a string: ");
    gets(c);
    for(i=0;c[i]!=0;i++);
    for (j=0;c[j]!=0;j++)
    {
        if (c[j]>='a' && c[j]<='z')
            printf("\n%c is a Lower Case Letter",c[j]);
        else if (c[j]>='A' && c[j]<='Z')
            printf("\n%c is an Upper Case Letter",c[j]);
        else if (c[j]>='0' && c[j]<='9')
            printf("\n%c is a Number",c[j]);
        else
            printf("\n%c is a Symbol",c[j]);
    }
}
