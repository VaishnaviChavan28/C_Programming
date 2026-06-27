#include<stdio.h>
int main()
{
    int n,i;
    i=1;
    // prints table of any number....
    printf("Enter Any Number to prints table of it... ");
    scanf("%d",&n);
    printf("\nTable of %d is :- \n",n);
    while (i<=10)
    {
        printf("\n%d * %d = %d",n,i,n*i);
        i++;
    }
    
}