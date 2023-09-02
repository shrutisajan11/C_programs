#include<stdio.h>
void main()
{
 int i,a[30],b[30],c[60],asize,bsize,csize,j,temp;
 printf("First array:\n");
 printf("Enter no of elements:\n");
 scanf("%d",&asize);
 printf("Enter elements");
 for(i=0;i<asize;i++)
    {
    scanf("%d",&a[i]);
    }
 printf("Enter no of elements:\n");
 scanf("%d",&bsize);
  printf("Enter elements");
 for(i=0;i<bsize;i++)
    {
    scanf("%d",&b[i]);
    }
 csize = asize + bsize;
 for(i=0;i<asize;i++)
    {
    c[i] = a[i] ;
    }
 for(i=0;i<bsize;i++){
    c[asize + i] = b[i] ;
 }

 for(i=0;i<csize;i++)
    {
    for(j=0;j<csize-i-1;j++)
    {
        if(c[j+1]<c[j])
        {
            temp = c[j+1];
            c[j+1] = c[j];
            c[j] = temp;
        }
    }
    }

 for(i=0;i<csize;i++)
    {
    printf("%d ",c[i]);
    }


}

