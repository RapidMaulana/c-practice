#include <stdio.h>
#include <string.h>
#include "./functions.cpp"
#include <stdlib.h>

int main()
{
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
        storeData();
        displayData();
        break;
    case 2:
        storeData();
        searchData();
        break;
    case 3:
        storeData();
        sortData();
        break;
    case 4:
        storeData();
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