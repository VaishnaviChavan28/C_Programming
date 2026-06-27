#include<stdio.h>
int main()
{
    int c,n1,n2,result,c1;
    float div;

    menu:
    printf("\n\t\t1.Addition");
    printf("\n\t\t2.Subtraction");
    printf("\n\t\t3.Multiplication");
    printf("\n\t\t4.Division");
    printf("\n\t\tEnter Your Choice : ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("\n\t\tEnter Any Two Numbers : ");
        scanf("%d%d",&n1,&n2);
        result=n1+n2;
        printf("\n\t\tAddition : %d\n",result);
        break;
    case 2:
        printf("\n\t\tEnter Any Two Numbers : ");
        scanf("%d%d",&n1,&n2);
        result=n1-n2;
        printf("\n\t\tSubtraction : %d\n",result);
        break;
    case 3:
        printf("\n\t\tEnter Any Two Numbers : ");
        scanf("%d%d",&n1,&n2);
        result=n1*n2;
        printf("\n\t\tMultiplication : %d\n",result);
        break;
    case 4:
        printf("\n\t\tEnter Any Two Numbers : ");
        scanf("%d%d",&n1,&n2);
        if(n2!=0)
        {
        div=(float)n1/n2;
        printf("\n\t\tDivision : %.2f\n",div);
        }
        else{
        printf("\n\t\tNumber cannot be divisible by zero");
        }
        break;
    default:
        printf("\n\t\tEntered Choice is invalid\n");
        break;
    }
    printf("\n\t\tDo you want to continue, then press 1 ");
    scanf("%d",&c1);
    if(c1==1)
    {
        goto menu;
    }
    else
    {
        printf("\n\n\t\tTHANK YOU......\n\n");
    }

}