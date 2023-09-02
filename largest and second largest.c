#include<stdio.h>
int main()
{
    int arr[50],n, max1,max2,i,j,t;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element:");
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    max1=arr[n-1];
    max2=arr[n-2];
    printf("The largest element is %d and the second largest is %d",max1,max2);
    return 0;
}
