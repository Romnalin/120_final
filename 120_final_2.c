#include <stdio.h>
#include <string.h>

int main()
{
    int a[50];
    int num,i,j,min,temp;

   scanf("%d",&num);

   for(i=1;i<=num;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=1;i<=num;i++)
   {
       for(j=1;j<i;j++)
       {
           if(a[i]==a[j])
           {
               printf("%d",a[i]);
           }
       }
   }

 return 0;

}
