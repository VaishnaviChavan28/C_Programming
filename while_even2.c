#include<stdio.h>
int main()
{
    int i,sum;
    // prints first ten even numbers and its sum...
    i=2;
    sum=0;
    while(i<=20)
    {
        printf("%d\n",i);
        sum=sum+i;
        i=i+2;
    }
    printf("Sum = %d\n ",sum);
    printf("THANK YOU");


}