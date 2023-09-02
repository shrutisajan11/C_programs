#include<stdio.h>
int main()
{
    int arr[50],nsum,psum,nc,pc,i,n,j;
    nsum=psum=pc=nc=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
      if(arr[j]>0)
        {
        psum=psum+arr[j];
        pc++;
        }
    else
        {
        nsum=nsum+arr[j];
        nc++;
        }
    }
    printf("\nTotal count of negative numbers=%d",nc);
    printf("\nTotal sum of negative numbers=%d",nsum);
    printf("\nTotal count of positive numbers=%d",pc);
    printf("\nTotal sum of positive numbers=%d",psum);
    return 0;
}
