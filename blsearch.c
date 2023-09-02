#include<stdio.h>
void linear_search(int A[],int n,int x);
void binary_search(int A[],int n,int x);
void main()
{
    int A[100],n,x,c,flag=0;
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    while(flag!=1)
    {
        printf("Enter the element to be searched");
        scanf("%d",&x);
        printf("MENU\n");
        printf("1:Linear Search\n");
        printf("2:Binary Search\n");
        printf("Enter your choice:\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                linear_search(A,n,x);
                break;
            case 2:
                binary_search(A,n,x);
                break;
            case 3:
                flag=1;
                break;
            default:
                printf("Invalid option\n");
        }
    }
}
void linear_search(int A[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(A[i]==x)
        {
            printf("Element %d is found at location %d\n",x,i);
            break;
        }
    }
    if(i==n)
    {
        printf("Element not found in the array\n");
    }
}

void binary_search(int A[],int n,int x)
{
    int i,j,temp,low,high,mid,flag=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("The sorted array is:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(A[mid]==x)
        {
            printf("Element %d is found at location %d\n",x,mid);
            flag=1;
            break;
        }
        else if(A[mid]<x)
        {
            low=mid+1;
            mid=(low+high)/2;
        }
        else
        {
            high=mid-1;
            mid=(low+high)/2;
        }
    }
    if(flag!=1)
    {
        printf("Element is not found in the array\n:");
    }
}
