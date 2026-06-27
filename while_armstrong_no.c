#include<stdio.h>
int main()
{
    // Checking the number is armstrong or not...
    printf("Enter the number : ");
    int n;
    scanf("%d",&n);
    int a,pow,sum,count=0,temp=n;
    while (n>0)
    {
        // Counting the number
        count++;
        n=n/10;
    }
    n=temp;
    while (n>0)
    {
        // fetching the number
        int digit=n%10;
        a=1;
        pow=1;
        while (a<=count)
        {
            // finding the power of the number
            pow*=digit;
            a++;
        }
        // storing the number...
        sum+=pow;
        n=n/10;
 
    }
    if(temp==sum)
    {
        printf("%d is Armstrong number ",temp);
    }
    else{
        printf("%d is Not Armstrong number ",temp);
    }
    
}