#include<stdio.h>
#include<math.h>
int binary(int n)
{
    int rem,temp=1,bny=0;
    while (n!=0)
        {
            rem=n%2;
            n=n/2;
            bny=bny+rem*temp;
            temp=temp*10;
        }
        return bny;
}
int main()
{
    int num;
    printf("Ënter a decimal number");
    scanf("%d",&num);
    printf("%d in decimal=%d in binary",num,binary(num));
    return 0;
}
