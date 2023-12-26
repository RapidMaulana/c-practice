#include <stdio.h>
#include <string.h>
#include "./functions.cpp"

int main()
{
    // declaring variables here
    int choice;
    // ########################

    printf("What do you want to do? \n");
    printf("    Display Data\n");
    printf("    Search Data\n");
    printf("    Sort Data\n");
    printf("    Export Data\n");
    printf("    Exit\n");
    printf("Your choice : ");

    scanf("%d", &choice);
    storeData();
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