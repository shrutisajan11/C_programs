//Sum of First And Last Digit of a Given Number
void main()
{
    int n,x,r,num[10],i=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    x=n;
    while (x!=0)
    {
       r=x%10;
       num[i]=r;
       x=x/10;
       i=i+1;
    }
    sum=num[0]+num[i-1];
    printf("\nSum of the 1st and last digit of the number %d is : %d",n,sum);
}
