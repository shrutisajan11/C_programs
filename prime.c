#include<stdio.h>
int main()
{
int n=200;
printf("Prime numbers between 200 and 250:\n");
while (n<=250)
{
    prime(n);
    n++;
}
}
void prime(int x)
{
    int i=1,count=0;
    for (i=1;i<=x;i++)
    {
        if (x%i==0)
            count++;
    }
    if (count==2)
        printf("%d\n",x);
}
