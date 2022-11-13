#include<stdio.h>

int main()
{
int a[30];
 countduplicate(a) ;
   return 0;
}

int countduplicate(int b[30]) 
{
 int n , i ,j ,count=0;
 printf(" enter the limit \n");
 scanf("%d",&n);
 printf(" enter the element\n");
 for(i=0;i<n;i++)
 { 
     scanf("%d",&b[i]);
 }
  for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
     {
       if(b[i]==b[j])
     
        count++;
     }
   }  
   printf("number of duplicatevalue is %d",count);
}   

