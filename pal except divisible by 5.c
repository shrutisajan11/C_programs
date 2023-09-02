#include<stdio.h>
int main()
{
    int num,rem,rev,temp,start,end;
    printf("Enter the lower limit:");
    scanf("%d",&start);
    printf("Enter the upper limit:");
    scanf("%d",&end);
    printf("Palindrome numbers between %d and %d are:",start,end);
    for (num=start;num<=end;num++)
    {
        temp=num;
        rev=0;
        while (temp)
        {
            rem=temp%10;
            temp=temp/10;
            rev=rev*10+rem;
        }
        if (num==rev)
            if (num%5!=0)
            printf("\n%d",num);
    }
    return 0;
}
