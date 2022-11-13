#include<stdio.h>
int main()
{
int a[30];
sortarr(a);
return 0;
}

int sortarr(int b[30])
{
 int i,j,x,n;
 printf(" enter the limit ");
 scanf("%d",&n);
 printf("enter the %d numbers \n",n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&b[i]);
 }
 for(i=0;i<n; i++)
 {
  for(j=i+1;j<n;j++)
   {
      if (b[i]>b[j])
       {
          x=b[i];
          b[i]=b[j];
          b[j]=x;
       }
   }
}
    printf(" sorted array \n");
    for(i=0;i<n;i++)
    printf("%d\n",b[i]);

}               

