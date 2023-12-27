#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "./functions.cpp"

int main()
{
    storeData();

    // declaring variables here
    int choice;
    // ########################

    system("clear");
    printf("What do you want to do? \n");
    printf("    Display Data\n");
    printf("    Search Data\n");
    printf("    Sort Data\n");
    printf("    Export Data\n");
    printf("    Exit\n");
    printf("Your choice : ");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        displayData();
        break;
    case 2:
        searchData();
        break;
    case 3:
        sortData();
        break;
    case 4:
        exportData();
        break;
    case 5:
        printf("Thank you for using this program!\n");
        break;
    default:
        printf("Please input the right number!\n");
        break;
    }
}