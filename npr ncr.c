#include<stdio.h>
int fact(int x);
int main()
{
    int n,r,c,p;
    printf("Enter value of N and R:");
    scanf("%d%d",&n,&r);
    c = fact(n)/(fact(r)*fact(n-r));
    p = fact(n)/fact(n-r);
    printf("nCr = %d\n",c);
    printf("nPr = %d\n",p);
 return 0;
}
int fact(int x){
 int f;
 if(x==0)
    return 1;
 else
{
    f=x*fact(x-1);
 return f;
}
}
