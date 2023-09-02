#include<stdio.h>
int main(){

 int i=0,words=1,wc=0;
 char str1[100];
 printf("Enter string:");
 gets(str1);
 while(str1[i]!='\0' && str1[i+1]!='\0')
    {
    if(str1[i]==' ' )
        words = 0;
    else if(str1[i]!= ' ' )
        words = 1;
    if(words == 0 && str1[i+1]!=' ')
        wc+=1;
    i++;
    }
 printf("No of words:%d\n",wc+1);
 return 0;
}
