#include<stdio.h>
int main()
{
    int ch,n;
    printf("\n1.Jan\n2.Feb\n3.Mar\n4.Apr\n5.May\n6.June\n7.July\n8.Aug\n9.Sep\n10.Oct\n11.Nov\n12.Dec");
    printf("\nEnter your Choice ");
    scanf("%d",&ch);
    // switch (ch)
    // {
    // case 1:
    //     printf("There are 31 days in Jan");
    //     break;
    // case 2:
    //     printf("There are 28/29 days in Feb");
    //     break;
    // case 3:
    //     printf("There are 31 days in Mar");
    //     break;
    // case 4:
    //     printf("There are 30 days in Apr");
    //     break;
    // case 5:
    //     printf("There are 31 days in May");
    //     break;
    // case 6:
    //     printf("There are 30 days in June");
    //     break;
    // case 7:
    //     printf("There are 31 days in July");
    //     break;
    // case 8:
    //     printf("There are 31 days in Aug");
    //     break;
    // case 9:
    //     printf("There are 30 days in Sep");
    //     break;
    // case 10:
    //     printf("There are 31 days in Oct");
    //     break;
    // case 11:
    //     printf("There are 30 days in Nov");
    //     break;
    // case 12:
    //     printf("There are 31 days in Dec");
    //     break;
    // default:
    //     printf("Invalid Choice");
    //     break;
    // }
    switch (ch)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("There are 31 days in this month");
        break;
    case 2:
        printf("There are 28/29 days in this month");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("There are 30 days in this month");
    default:
        printf("\nInvalid Choice");
        break;
    }

}