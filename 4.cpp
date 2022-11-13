#include<stdio.h>
int main()
{
   int a[30];
   rotate(a);
   return 0;
}

int rotate(int b[30]) 

{
 int  i , temp=0 , d;
 printf(" enter the element\n");
 for(i=0;i<5;i++)
 { 
     scanf("%d",&b[i]);
 }

d=2;
 
 while(d!=0)
 {
     temp=b[4];
     for(i=4; i>=0 ; i--)
     {
         b[i]=b[i-1];
        
     }
      b[0]=temp;
    d--;
 } 
  
 
 
  printf(" rotated array \n");
   for(i=0;i<5;i++)
    {
       printf("%d\n",b[i]);
    }

  
}

