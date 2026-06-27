#include<stdio.h>
int main()
{
    // program to print multiple tables..
    int a=1,n,b=1;
    printf("Enter Any number : ");
    scanf("%d",&n);
    while (a<=n)
    {
        b=1;
        while (b<=10)
        {
            printf("%d  ",a*b);
            b++;
        } 
        printf("\n");
        a++;
    }
    
    
}