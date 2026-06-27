#include<stdio.h>
int main()
{
    // printing all prime numbers from 1 to n..
    int a,num,n,flag;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Primes from 1 to %d are: ", n); 
    num=2;
    a=2;
    flag=0;
    while (num<=n)
    {
        a=2;
        flag=0;
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
            printf("%d ",num);
        }
        num++;
        
    }
    printf("\n");
    
    
}