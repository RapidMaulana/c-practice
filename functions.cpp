#include <stdio.h>
#include <string.h>

struct menu
{
    char menu[100];
};
struct column
{
    char location[100];
    char city[100];
    int price;
    int rooms;
    int bathroom;
    int carpark;
    char type[100];
    char furnish[100];
};

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct column data[3950], int size, char value)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                swap(&data[j], &data[j + 1]);
            }
        }
    }
}

void bubbleSortInt(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void storeData()
{
    struct menu menust[8];
    struct column data[3950];

    int i = 0;

    FILE *file = fopen("file.csv", "r");

    fscanf(file, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%s\n", menust[0].menu, menust[1].menu, menust[2].menu, menust[3].menu, menust[4].menu, menust[5].menu, menust[6].menu, menust[7].menu);
    while (!feof(file))
    {
        fscanf(file, "%[^,],%[^,],%d,%d,%d,%d,%[^,],%s\n", data[i].location, data[i].city, &data[i].price, &data[i].rooms, &data[i].bathroom, &data[i].carpark, data[i].type, data[i].furnish);
        i++;
    }
    fclose(file);
}

void displayData()
{
    int rows;
    struct menu menust[8];
    struct column data[3950];

    printf("Number of rows:");
    scanf("%d", &rows);
    puts("");
    printf("%-30s %-15s %-10s %-10s %-10s %-10s %-10s %-10s\n", menust[0].menu, menust[1].menu, menust[2].menu, menust[3].menu, menust[4].menu, menust[5].menu, menust[6].menu, menust[7].menu);
    for (int i = 0; i < rows; i++)
    {
        printf("%-30s %-15s %-10d %-10d %-10d %-10d %-10s %-10s \n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
    }
}

void searchData()
{
    struct menu menust[8];
    struct column data[3950];

    char column[100], val[100];

    printf("Choose column:");
    scanf("%s", column);
    puts("");
    printf("Sort ascending or descending?");
    scanf("%s", val);
    puts(""); 
    
    printf("%-30s %-15s %-10s %-10s %-10s %-10s %-10s %-10s\n", menust[0].menu, menust[1].menu, menust[2].menu, menust[3].menu, menust[4].menu, menust[5].menu, menust[6].menu, menust[7].menu);
    for (int i = 0; i < 5; i++)
    {
        printf("%-30s %-15s %-10d %-10d %-10d %-10d %-10s %-10s \n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
    }
}

void sortData()
{
    char column[100], val[100];
    printf("Choose column:");
    scanf("%s", column);
    puts("");
    printf("Sort ascending or descending?");
    scanf("%s", val);
    puts("");
}

void exportData()
{
    printf("this export\n");
}