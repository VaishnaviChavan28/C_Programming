#include<stdio.h>
int main()
{
    int num;
    printf("Enter Any Number : ");
    scanf("%d",&num);
    switch (num%2)
    {
    case 0:
        printf("Number is Even");
        break;
    case 1:
        printf("Number is Odd");
        break;
    default:
        printf("Input is invalid");
        break;
    }
}