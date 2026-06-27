#include<stdio.h>
int main()
{
    // check the number is strong number or not..
    int num,a,sum=0,result,temp;
    printf("Enter The number : ");
    scanf("%d",&num);
    temp=num;
    while (temp>0)
    {
        int digit=temp%10;
        result=1;
        a=digit;

        while (a>0)
        {
            result=result*a;
            a--;
        }
        sum=sum+result;
        temp=temp/10;
    }
    
    if(sum==num)
    {
        printf("The Given number is Strong Number");
    }
    else
    {
        printf("The Given number is not Strong Number");
    }

    
}