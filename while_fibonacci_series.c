#include<stdio.h>
int main()
{
    // printing fibonacci series...
    int a=1,n,first=0,second=1,third;
    printf("Enter the number for fibonacci series : ");
    scanf("%d",&n);
    while (a<=n)
    {
       printf("%d  ",first);
       third=first+second;
       first=second;
       second=third;
       a++;
    }
    
}