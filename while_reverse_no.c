#include<stdio.h>
int main()
{
    // Reveresed the entered number....
    int num,digit,rev=0;
    printf("Enter Any number : ");
    scanf("%d",&num);
    while (num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    printf("\n Reversed Number is : %d \n",rev);
    
}