#include<stdio.h>
int main()
{
 int a[10];
 printf(" lowest no is %d \n",lowest(a) );
return 0;
}
int lowest(int b[])
{
  int i,min;
  printf(" enter the number\n ");
  for(i=0;i<10;i++)
  {
     scanf("%d\n",&b[i]);
  }
  min=b[0];
  for(i=0;i<10;i++)
   {
      if(b[i]<min)
       min=b[i];
   }
  return min;
    
}
                                                         


