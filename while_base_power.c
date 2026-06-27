#include<stdio.h>
int main()
{
    // print the result of base and power numbers...
   int b,p,i,result;
   printf("Enter base number : ");
   scanf("%d",&b);
   printf("Enter power number : ");
   scanf("%d",&p);
   i=1;
   result=1;
   while (i<=p)
   {
        result=result*b;
        i++;
   }
   printf("Result = %d ",result);
    
}