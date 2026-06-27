#include<stdio.h>
int main()
{
    int ch,ch1,ch2,total=0,count=0,ct,ct1;
    float cgst,sgst,finaltotal;

    printf("\n\t\t---------Welcome To Our Hotel-------\n\t\t");

    menu:
    printf("\n\t\t 1. Starter ");
    printf("\n\t\t 2. Veg ");
    printf("\n\t\t 3. NonVeg ");
    printf("\n\t\t 4. ColdDinks ");
    printf("\n\n\t\tEnter Your Choice Please : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        starter:
        printf("\n\t\t---------Welcome To Starters-------\n\t\t");
        printf("\n\t\t 1. Starter1 : 200 ");
        printf("\n\t\t 2. Starter2 : 300 ");
        printf("\n\t\t 3. Starter3 : 400  ");
        printf("\n\t\t 4. Starter4 : 500 ");
        printf("\n\n\t\tEnter Your Choice Please : ");
        scanf("%d",&ch1);
        switch (ch1)
        {
        case 1:
            total=total+200;
            break;
        case 2:
            total=total+300;
            break;
        case 3:
            total=total+400;
            break;
        case 4:
            total=total+500;
            break;
        
        default:
            printf("\n\t\tInValid Choice..... Enter the Valid Choice Please...");
            break;
        }
        if(ch1<=4)
        {
            count++;
            printf("\n\t\tYour Order Is Placed....%d ",count);
        }
        printf("\n\n\t\tDo you want to continue with Starters, please press 1 to continue ");
        scanf("%d",&ct);
        if(ct==1){
            goto starter;
        }
        break;
    case 2:
        //veg;
        Veg:
        printf("\n\t\t---------Welcome To Veg-------\n\t\t");
        printf("\n\t\t 1. Veg1 : 200 ");
        printf("\n\t\t 2. Veg2 : 300 ");
        printf("\n\t\t 3. Veg3 : 400  ");
        printf("\n\t\t 4. Veg4 : 500 ");
        printf("\n\n\t\tEnter Your Choice Please : ");
        scanf("%d",&ch1);
        switch (ch1)
        {
        case 1:
            total=total+200;
            break;
        case 2:
            total=total+300;
            break;
        case 3:
            total=total+400;
            break;
        case 4:
            total=total+500;
            break;
        
        default:
            printf("\n\t\tInValid Choice..... Enter the Valid Choice Please...");
            break;
        }
         if(ch1<=4)
        {
            count++;
            printf("\n\t\tYour Order Is Placed... ",count);
        }
        printf("\n\n\t\tDo you want to continue with Veg, please press 1 to continue ");
        scanf("%d",&ct);
        if(ct==1){
            goto Veg;
        }
        break;
    case 3:
        //Nonveg;
        NonVeg:
        printf("\n\t\t---------Welcome To NonVeg-------\n\t\t");
        printf("\n\t\t 1. NonVeg1 : 200 ");
        printf("\n\t\t 2. NonVeg2 : 300 ");
        printf("\n\t\t 3. NonVeg3 : 400  ");
        printf("\n\t\t 4. NonVeg4 : 500 ");
        printf("\n\n\t\tEnter Your Choice Please : ");
        scanf("%d",&ch1);
        switch (ch1)
        {
        case 1:
            total=total+200;
            break;
        case 2:
            total=total+300;
            break;
        case 3:
            total=total+400;
            break;
        case 4:
            total=total+500;
            break;
        
        default:
            printf("\n\t\tInValid Choice..... Enter the Valid Choice Please...");
            break;
        }
        if(ch1<=4)
        {
            count++;
            printf("\n\t\tYour Order Is Placed.... ",count);
        }
        printf("\n\n\t\tDo you want to continue with NonVeg, please press 1 to continue ");
        scanf("%d",&ct);
        if(ct==1){
            goto NonVeg;
        }
        break;
    case 4:
        ColdDrinks:
        printf("\n\t\t---------Welcome To ColdDrinks-------\n\t\t");
        printf("\n\t\t 1. ColdDrinks1 : 200 ");
        printf("\n\t\t 2. ColdDrinks2 : 300 ");
        printf("\n\t\t 3. ColdDrinks3 : 400  ");
        printf("\n\t\t 4. ColdDrinks4 : 500 ");
        printf("\n\n\t\tEnter Your Choice Please : ");
        scanf("%d",&ch1);
        switch (ch1)
        {
        case 1:
            total=total+200;
            break;
        case 2:
            total=total+300;
            break;
        case 3:
            total=total+400;
            break;
        case 4:
            total=total+500;
            break;
        
        default:
            printf("\n\t\tInValid Choice..... Enter the Valid Choice Please...");
            break;
        }
        if(ch1<=4)
        {
            count++;
            printf("\n\t\tYour Order Is Placed.... ",count);
        }
        printf("\n\n\t\tDo you want to continue with ColdDrinks, please press 1 to continue ");
        scanf("%d",&ct);
        if(ct==1){
            goto ColdDrinks;
        }
        break;
    
    default:
        printf("Choice is invalid");
        break;
    }
     //mainmenu
    printf("\n\n\t\tDo you want to continue with MainMenu, please press 1 to continue ");
    scanf("%d",&ct1);
    if(ct1==1){
    goto menu;
    }

    //calculations
    if(count>0)
    {
        cgst=total*0.06;
        sgst=total*0.06;
        finaltotal=total+cgst+sgst;
        printf("\n\t--------------------YOUR BILL---------------\n\t\t");
        printf("\n\t\tTotal \t\t : \t %d",total);
        printf("\n\t\tCGST \t\t : \t %f",cgst);
        printf("\n\t\tSGST \t\t : \t %f",sgst);
        printf("\n\t\tFinal Total \t : \t %f",finaltotal);
        printf("\n\n\t---------THANK YOU AND VISIT AGAIN----------\n\t\t");
    }
    else
    {
        printf("\n\n\t\tNo Any Order....Thank you!!!!!\n\n\t");
    }

}
    