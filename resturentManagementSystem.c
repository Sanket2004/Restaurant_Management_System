#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int choice;
    printf("\t\t\t\t--------------------- Restaurant ---------------------\t\t\t\t\n");
    printf("\t\t\t\tEnter your choice according to the menu given below - \n");
    printf("\t\t\t\t1 = Book a table.\n");
    printf("\t\t\t\t2 = Check table availablity.\n");
    printf("\t\t\t\t3 = Collection of the day.\n");
    printf("\t\t\t\t4 = Total customers of the day.\n");
    printf("\t\t\t\t5 = Highest bill of the day.\n");
    printf("\t\t\t\t6 = Customers details.\n");
    printf("\t\t\t\t7 = Food menu.\n");

    for (;;)
    {
        printf("\t\t\t\tSelect a option:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\t\t\t\t1 = Book a table.\n");
            break;
        case 2:
            printf("\t\t\t\t2 = Check table availablity.\n");
            break;
        case 3:
            printf("\t\t\t\t3 = Collection of the day.\n");
            break;
        case 4:
            printf("\t\t\t\t4 = Total customers of the day.\n");

            break;
        case 5:
            printf("\t\t\t\t5 = Highest bill of the day.\n");
            break;
        case 6:
            printf("\t\t\t\t6 = Customers details.\n");
            break;
        case 7:
            printf("\t\t\t\t7 = Food menu.\n");
            break;
        case 8:
            exit(0);
            break;

        default:
            printf("\t\t\t\tSelect a valid one\n");
            break;
        }
    }
}

/* contributers : Suhana Parvin , Sanket Banerjee */
