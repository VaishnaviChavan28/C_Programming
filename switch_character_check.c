#include <stdio.h>
int main()
{
    char c;
    int ct;
    menu:
    printf("Enter any Character: ");
    scanf(" %c",&c);

    if(c>='a'&&c<='z')
    {
        switch (c)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Entered Character is Small Vowel");
            break;
        default:
            printf("Entered Character is Small Consonunt");
            break;
        }
    }
    else if(c>='A'&&c<='Z')
    {
       switch (c)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Entered Character is Capital Vowel");
            break;
        default:
            printf("Entered Character is Capital Consonunt");
            break;
        } 
    }
    else
    {
        printf("Entered Character is not Vowel nor Consonunt ");
    }
    printf("\nDo you want to continue with the process, then press 1");
    scanf("%d",&ct);
    if(ct==1)
    {
        goto menu;
    }
    else
    {
        printf("\nTHANK YOU!!!!!\n\n");
    }
}