#include<stdio.h>
int main()
{
    // Find the factorial of given number....
    int i,n,result;
    printf("Enter Any Number to Find It's Factorial : ");
    scanf("%d",&n);
    i=1;
    result=1;
    while (i<=n)
    {
        result=result*i;
        i++;
    }
    printf("Factorial of %d is : %d",n,result);
    
}