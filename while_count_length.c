#include<stdio.h>
int main()
{
    // counting the number length....
    int num,count=0;
    printf("Enter Any Number : ");
    scanf("%d",&num);
    while (num>0)
    {
       count++;
       num=num/10;
    }
    printf("\nCount of entered number is : %d\n",count);
    
}