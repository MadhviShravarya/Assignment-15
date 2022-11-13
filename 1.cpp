#include<stdio.h>
int main()
{
 int a[10];
 printf(" greatest no is %d \n",  greatest(a) );
return 0;
}
int greatest(int b[])
{
  int i,max ;
  printf(" enter the number\n ");
  for(i=0;i<10;i++)
  {
     scanf("%d\n",&b[i]);
  }
  max=b[0];
  for(i=0;i<10;i++)
   {
      if(b[i]>max)
       max=b[i];
   }
  return max;
    
}

