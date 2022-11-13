#include<stdio.h>

int main()
{
int a[30];
unique(a) ;
   return 0;
}

int unique(int b[30]) 
{
 int n , i ,j,count;
 printf(" enter the limit \n");
 scanf("%d",&n);
 printf(" enter the element\n");
 for(i=0;i<n;i++)
 { 
     scanf("%d",&b[i]);
 }
 for(i=0;i<n;i++)
   {   
       count=0;
      for(j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
              count++;      
        }
      if(count==0)
      {
        printf("%d",b[i]);
      }
    }
}


