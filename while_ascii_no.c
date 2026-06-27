#include<stdio.h>
int main()
{
    int c;
    c=65;
    // prints ascii values with their alphabets...
    while (c<=90)
    {
       printf(" \n %d : %c | %d : %c ",c,c,c+32,c+32);
       c++;
    }
    
}