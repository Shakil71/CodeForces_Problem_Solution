#include <stdio.h>

int main()
{
   int i,a,n,pos=0,even=0,odd=0,neg=0;
   scanf("%d",&n);
   for ( i = 1; i <=n; i++)
   {
    scanf("%d",&a);
    if (a%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    if (a>0)
    {
        pos++;
    }
    else if(a<0){
        neg++;
    }
    else{
        printf(NULL);
    }
    
   }
   printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);
   
   return 0;
}