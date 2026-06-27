#include<stdio.h>
int main()
{
    // printing neon number...means taking 9 , squaring 9 then 81 is ans , 8+1 =9 then sum=9 means 9 is neon number..
    int n,a=1,sum=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int square=n*n;
    while (square>0)
    {
       int digit=square%10;
       sum=sum+digit;
       square/=10;

    }
    if(n==sum)
    {
        printf(" \n %d is neon number ",n);
    }
    else{
        printf(" \n %d is not neon number ",n);
    }
}