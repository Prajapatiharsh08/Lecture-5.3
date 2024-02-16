#include <stdio.h>
void main()
{
    // Q.1 Write a Program to find the minimum number from the given 3 numbers using the ternary operator.

    int a, b;

    printf("Enter the Value of A :");
    scanf("%d", &a);

    printf("Enter the Value of B :");
    scanf("%d", &b);

    a < b ? printf("Value of A is Minimum : %d\n", a) : printf("Value of B is Minimum : %d\n", b);

    // Q.2 Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.

    int lang, rech;

    printf("Which Language do you prefer (1.English , 2.Hindi , 3.Gujarat): \n");
    scanf("%d", &lang);

    switch (lang)
    {
    case 1:
        printf("Select the Recharge (1.Internet Recharge , 2.Top-up Recharge , 3.Special Recharge): \n");
        scanf("%d", &rech);

        switch (rech)
        {
        case 1:
            printf("You have successfully done Internet Recharge.");
            break;

        case 2:
            printf("You have successfully done Top-up Recharge.");
            break;

        case 3:
            printf("You have successfully done Special Recharge.");
            break;

        default:
            printf("Invalid Number.");
            break;
        }
    break;

    case 2:
        printf("Select the Recharge (1.Internet Recharge ke liye 1 dabaiye , 2.Top-up Recharge ke liye 2 dabaiye , 3.Special Recharge ke liye 3 dabaiye): \n");
        scanf("%d", &rech);

        switch (rech)
        {
        case 1:
            printf("Aapne safaltapurvak Internet Recharge kar liya he.");
            break;

        case 2:
            printf("Aapne safaltapurvak Top-up Recharge kar liya he");
            break;

        case 3:
            printf("Aapne safaltapurvak Special Recharge kar liya he.");
            break;

        default:
            printf("Invalid Number.");
            break;
        }
    break;

    case 3:
        printf("Select the Recharge (1.Internet Recharge mate 1 dabavo , 2.Top-up Recharge mate 2 dabavo , 3.Special Recharge mate 3 dabavo): \n");
        scanf("%d", &rech);

        switch (rech)
        {
        case 1:
             printf("Tame safaltapurvak Internet Recharge karyu chhe.");
            break;

        case 2:
            printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
            break;

        case 3 :
            printf("Tame safaltapurvak Special Recharge karyu chhe.");
            break;

            default:
            printf("Invalid Number.");
            break;
        }

    break;
    default:
        printf("Invalid Number.");
        break;
    
    }
}