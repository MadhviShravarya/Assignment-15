#include<stdio.h>

int main()
{
int a[30];
checkfreq(a) ;
   return 0;
}

int checkfreq(int b[30]) 
{
 int n , i ,j;
 int f[100]={0};
 printf(" enter the limit \n");
 scanf("%d",&n);
 printf(" enter the element\n");
 for(i=0;i<n;i++)
 { 
     scanf("%d",&b[i]);
 }
 for(i=0;i<n;i++)
   {   
       f[b[i]]++;
   }
 for(i=0;i<100;i++)
   {
      if(f[i]!=0)
       {
         printf(" %d==>%d\n",i,f[i]);
       }
   }

