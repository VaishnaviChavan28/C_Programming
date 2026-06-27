#include<stdio.h>
int main()
{
    int c;
    printf("1. Printing Numbers from 1 to n \n"); 
    printf("2. Printing Numbers from n to 1 \n"); 
    printf("3. Printing Even Numbers from 1 to n \n");
    printf("4. Printing Sum of Numbers from 1 to n \n"); 
    printf("5. Printing Product of Numbers from 1 to n \n");
    printf("6. Fetching a number\n");
    printf("7. Fetching a number and displaying its addition\n");
    printf("8. Reversing a number\n");
    printf("9. Check the given number is palindrome or not\n");
    printf("Enter your Choice : ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        int a=1;
        int n;
        printf("Enter one number : ");
        scanf("%d",&n);
        while (a<=n)
        {
           printf("%d ",a);
           a++;
        }
        break;
    case 2:
        int b=1;
        int m;
        printf("Enter one number : ");
        scanf("%d",&m);
        while (m>=b)
        {
           printf("%d ",m);
           m--;
        }
        break;
    case 3:
        int c=1;
        int p;
        printf("Enter one number : ");
        scanf("%d",&p);
        while (c<=p)
        {
           if(c%2==0)
           {
            printf("%d ",c);
           }
           c++;
        }
        break;
    case 4:
        int d=1;
        int sum=0;
        int num;
        printf("Enter one number : ");
        scanf("%d",&num);
        while (d<=num)
        {
            sum=sum+d;
            d++;
        }
        printf("\nSum of Numbers is : %d ",sum);
        break;
    case 5:
        int e=1;
        int result=1;
        int numm;
        printf("Enter one number : ");
        scanf("%d",&numm);
        while (e<=numm)
        {
            result=result*e;
            e++;
        }
        printf("\nProduct of Numbers is : %d ",result);
        break;
    case 6:
        int n1;
        printf("Enter Any Number to fetch : ");
        scanf("%d",&n1);
        while (n1!=0)
        {
            int digit=n1%10;
            printf("%d\n",digit);
            n1=n1/10;
        }
        break;
    case 7:
        int n2;
        int addition=0;
        printf("Enter Any Number to fetch : ");
        scanf("%d",&n2);
        while (n2!=0)
        {
            int digit1=n2%10;
            printf("%d\n",digit1);
            addition+=digit1;
            n2=n2/10;
        }
        printf("Addition of fetched number is : %d ",addition);
        break;
    case 8:
        int n3;
        int rev=0;
        printf("Enter a number : ");
        scanf("%d",&n3);
        while (n3!=0)
        {
           int digit=n3%10;
           rev=rev*10+digit;
           n3=n3/10;
        }
        printf("Reversed Number is : %d ",rev );
        break;
    case 9:
        int n4;
        int rev1=0;
        printf("Enter a number : ");
        scanf("%d",&n4);
        int temp=n4;
        while (n4!=0)
        {
           int digit=n4%10;
           rev1=rev1*10+digit;
           n4=n4/10;
        }
        if(temp==rev1)
        {
            printf("Given number is palindrome");
        }
        else{
            printf("Given number is not palindrome");
        }
        break;
    default:
        printf("\n Entered choice is invalid....");
        break;
    }
     
}