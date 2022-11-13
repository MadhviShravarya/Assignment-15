#include<stdio.h>

int main()
{
int a[30];
printf(" adjacent duplicate is %d ", adduplicate(a) );
   return 0;
}

int adduplicate(int b[30]) 
{
 int n , i ,j , temp;
 printf(" enter the limit \n");
 scanf("%d",&n);
 printf(" enter the element\n");
 for(i=0;i<n;i++)
 { 
     scanf("%d",&b[i]);
 }
 
   for(i=0;i<n;i++)
    {
    if(b[i]==b[i+1])
     
       return b[i] ;
    } 
}


