#include<stdio.h>
int main()
{
    // Enter any number and prints its factors...
    int i,n;
    i=1;
    printf("Enter any Number : ");
    scanf("%d",&n);
    printf("Factors of %d are :- ",n);
    while (i<=n)
    {
        if(n%i==0)
        { 
            printf("%d\n",i);
        }
        i++;
    }
    
}