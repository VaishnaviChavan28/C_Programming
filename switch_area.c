#include <stdio.h>
int main()
{
    int ch,breadth,base,height,lenght,radius,area,c;

    menu:
    printf(" 1. Area of Triangle \n");
    printf(" 2. Area of Rectangle \n");
    printf(" 3. Area of Circle \n");
    printf("\n\nEnter your Choice : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("\n\nEnter the Base and Height of Triangle : ");
        scanf("%d%d",&base,&height);
        area=base*height*0.5;
        printf("\n\nArea of Triangle : %d ",area);
        break;
    case 2:
        printf("\n\nEnter the Breadth and Lenght of Rectangle : ");
        scanf("%d%d",&breadth,&lenght);
        area=breadth*lenght;
        printf("\n\nArea of Rectangle : %d ",area);
        break;
    case 3:
        printf("\n\nEnter the Radius of Circle : ");
        scanf("%d",&radius);
        area=3.14*radius*radius;
        printf("\n\nArea of Circle : %d ",area);
        break;
    default:
        printf("\nYou have entered wrong choice please check and try again...");
        break;
    }
    printf("\n\nDo You Want to Continue, If yes then press 1 ");
    scanf("%d",&c);
    if(c==1)
    {
        goto menu;
    }
    else
    {
        printf("\n\nTHANK YOU......\n\n");
    }
}