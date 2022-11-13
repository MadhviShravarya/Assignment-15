#include<stdio.h>

int main()
{
int a[30],b[30];

printf(" merged array %d", merge(a,b)) ;
   return 0;
}

int merge(int p[30], int q[30]) 
{
 int n , m ,j,temp=0, i,count,c[30];
 printf(" enter the limit \n");
 scanf("%d",&n);
 printf(" enter the element of 1st sorted array\n");
 for(i=0;i<n;i++)
 { 
     scanf("%d",&p[i]);
 }
 printf(" enter the limit of second array\n");
 scanf("%d",&m);
 printf(" enter the element of 2nd sorted array\n");
 for(i=0;i<m;i++)
 {
    scanf("%d",&q[i]);
 }
   for(i=0;i<n;i++)      
   {
    c[i]=p[i];
   }   
   for(i=0;i<m;i++)
   {
     c[i+n]=q[i];
   }

   for(i=0;i<(m+n);i++)
    {
        for(j=i+1;j<(m+n);j++ )
         {
           if(c[i]>c[j])
          {
          temp=c[i];
          c[i]=c[j];
          c[j]=temp;
          }
         }
    }
      
   printf(" merge and sorted array \n");
        
   for(i=0;i<=m+n;i++)
     {
       printf("%d\n",c[i]);
     }
      
  }

