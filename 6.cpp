#include<stdio.h>

int main()
{
int a[30];
displayreverse(a) ;
   return 0;
}

int displayreverse(int b[30]) 
{
 int n , i ,j;
 printf(" enter the limit \n");
 scanf("%d",&n);
 printf(" enter the element\n");
 for(i=0;i<n;i++)
 { 
     scanf("%d",&b[i]);
 }
   printf(" reverse array is \n");
   for(i=n-1;i>=0;i--)
    {
       printf("%d ", b[i]);
    }
}                                                         


