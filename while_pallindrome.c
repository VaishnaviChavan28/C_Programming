#include<stdio.h>
int main()
{
    // /checks the given string is pallindrome or not.....
    int num,digit,rev=0,temp;
    printf("Enter the Number : ");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(temp==rev)
    {
        printf("Given number is Pallindrome");
    }
    else{
        printf("Given number is Not Pallindrome");
    }
    // printing using ternory opreator...
    // printf(temp==rev? "Given number is Pallindrome" : "Given number is Not Pallindrome" );
    
}