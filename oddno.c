#include<stdio.h>
int main()
{
    int i,a,b;
    printf("Enter the upper limit:");
    scanf("%d",&a);
    printf("Enter the lower limit:");
    scanf("%d",&b);
    printf("Odd numbers in descending order are:");
    printf("\n");
    for (i=a;i>=b;i--)
        {
            if (i%2==1)
                printf("%d\n",i);
        }
}
