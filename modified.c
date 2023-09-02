#include <stdio.h>
#include <string.h>
void main()
{
    char c[20];
    int i;
    printf("Enter a string: ");
    gets(c);
    for(i=0;c[i]!=0;i++);

    {
        if (c[i]>='a' && c[i]<='z')
            printf("\n%c is a Lower Case Letter",c[i]);
        else if (c[i]>='A' && c[i]<='Z')
            printf("\n%c is an Upper Case Letter",c[i]);
        else if (c[i]>='0' && c[i]<='9')
            printf("\n%c is a Number",c[i]);
        else
            printf("\n%c is a Symbol",c[i]);
    }
}

