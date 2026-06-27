#include<stdio.h>
int main()
{
    // fetching the  given number....
    int num,digit;
    printf("Enter Any Number that you want to fetch... ");
    scanf("%d",&num);
    while (num>0)
    {
        digit=num%10;
        printf("%d\n",digit);
        num=num/10;
    }
    printf("\n THANK YOU \n");
    
}