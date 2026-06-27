#include<stdio.h>
int main()
{
    // prime numbers
    int num,a=2,flag=0;
    printf("Enter any number : ");
    scanf("%d",&num);
    while (a<=num/2)
    {
        if(num%a==0)
        {
            flag=1;
            break;
        }
        a++;
    }
    if(flag==0)
    {
        printf("Given Number is Prime Number");
    }
    else{
        printf("Given Number is not Prime Number");
    }
    
}