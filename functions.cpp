#include <stdio.h>
#include <string.h>

char *tolower(char str[100])
{
    int size = strlen(str);
    for (int i = 0; i < size - 1; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            // Convert uppercase letters to lowercase
            str[i] = str[i] + ('a' - 'A');
        }
    }
    return str;
}

struct menu
{
    char menu[100];
};
struct column
{
    char location[100];
    char city[100];
    char price[100];
    char rooms[100];
    char bathroom[100];
    char carpark[100];
    char type[100];
    char furnish[100];
};
struct searched
{
    char location[100];
    char city[100];
    char price[100];
    char rooms[100];
    char bathroom[100];
    char carpark[100];
    char type[100];
    char furnish[100];
};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// void bubbleSort(struct column data[3950], int size, char value[100], char col[100])
// {
//     if(strcmp(col, "rooms") == 0 || strcmp(col, "Rooms") == 0){
//         for (int i = 0; i < size - 1; i++)
//         {
//             for (int j = 0; j < size - 1; j++)
//             {
//                 if(strcmp(value, "asc") == 0 || strcmp(value, "Asc") == 0)
//                 {
//                     if(data[j].rooms > data[j+1].rooms){
//                         swap(&data[j].rooms, &data[j+1].rooms);
//                     }
//                 }
//                 else{
//                    if(data[j].rooms < data[j+1].rooms){
//                         swap(&data[j].rooms, &data[j+1].rooms);
//                     }
//                 }
//             }
//         }
//     }
// }

void storeData()
{
    struct menu menust[8];
    struct column data[3950];

    int i = 0;

    FILE *file = fopen("file.csv", "r");

    fscanf(file, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%s\n", menust[0].menu, menust[1].menu, menust[2].menu, menust[3].menu, menust[4].menu, menust[5].menu, menust[6].menu, menust[7].menu);
    while (!feof(file))
    {
        fscanf(file, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
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
        printf("%-30s %-15s %-10s %-10s %-10s %-10s %-10s %-10s \n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
    }
}

void searchData()
{
    struct menu menust[8];
    struct column data[3950];
    struct searched results[3950];

    char column[100], val[100];
    int total = 0, i, nf = 0;

    printf("Choose column:");
    scanf("%s", column);
    printf("What data you want to find? ");
    scanf("%s", val);
    puts("");

    tolower(column);

    if (strcmp(column, "location") == 0)
    {
        tolower(val);
        for (i = 0; i < 3940; i++)
        {
            char *res = tolower(data[i].location);
            if (strcmp(res, val) == 0)
            {
                strcpy(results[total].location, data[i].location);
                strcpy(results[total].city, data[i].city);
                strcpy(results[total].price, data[i].price);
                strcpy(results[total].rooms, data[i].rooms);
                strcpy(results[total].bathroom, data[i].bathroom);
                strcpy(results[total].carpark, data[i].carpark);
                strcpy(results[total].type, data[i].type);
                strcpy(results[total].furnish, data[i].furnish);
                total++;
            }
            else
            {
                nf++;
            }
        }
    }
    else if (strcmp(column, "city") == 0)
    {
        tolower(val);
        for (i = 0; i < 3940; i++)
        {
            char *res = tolower(data[i].city);
            if (strcmp(res, val) == 0)
            {
                strcpy(results[total].location, data[i].location);
                strcpy(results[total].city, data[i].city);
                strcpy(results[total].price, data[i].price);
                strcpy(results[total].rooms, data[i].rooms);
                strcpy(results[total].bathroom, data[i].bathroom);
                strcpy(results[total].carpark, data[i].carpark);
                strcpy(results[total].type, data[i].type);
                strcpy(results[total].furnish, data[i].furnish);
                total++;
            }
            else
            {
                nf++;
            }
        }
    }
    else if (strcmp(column, "price") == 0)
    {
        tolower(val);
        for (i = 0; i < 3940; i++)
        {
            if (strcmp(data[i].price, val) == 0)
            {
                strcpy(results[total].location, data[i].location);
                strcpy(results[total].city, data[i].city);
                strcpy(results[total].price, data[i].price);
                strcpy(results[total].rooms, data[i].rooms);
                strcpy(results[total].bathroom, data[i].bathroom);
                strcpy(results[total].carpark, data[i].carpark);
                strcpy(results[total].type, data[i].type);
                strcpy(results[total].furnish, data[i].furnish);
                total++;
            }
            else
            {
                nf++;
            }
        }
    }
    else if (strcmp(column, "rooms") == 0)
    {
        tolower(val);
        for (i = 0; i < 3940; i++)
        {
            if (strcmp(data[i].rooms, val) == 0)
            {
                strcpy(results[total].location, data[i].location);
                strcpy(results[total].city, data[i].city);
                strcpy(results[total].price, data[i].price);
                strcpy(results[total].rooms, data[i].rooms);
                strcpy(results[total].bathroom, data[i].bathroom);
                strcpy(results[total].carpark, data[i].carpark);
                strcpy(results[total].type, data[i].type);
                strcpy(results[total].furnish, data[i].furnish);
                total++;
            }
            else
            {
                nf++;
            }
        }
    }
    else if (strcmp(column, "bathroom") == 0)
    {
        tolower(val);
        for (i = 0; i < 3940; i++)
        {
            if (strcmp(data[i].bathroom, val) == 0)
            {
                strcpy(results[total].location, data[i].location);
                strcpy(results[total].city, data[i].city);
                strcpy(results[total].price, data[i].price);
                strcpy(results[total].rooms, data[i].rooms);
                strcpy(results[total].bathroom, data[i].bathroom);
                strcpy(results[total].carpark, data[i].carpark);
                strcpy(results[total].type, data[i].type);
                strcpy(results[total].furnish, data[i].furnish);
                total++;
            }
            else
            {
                nf++;
            }
        }
    }
    else if (strcmp(column, "carpark") == 0)
    {
        tolower(val);
        for (i = 0; i < 3940; i++)
        {
            if (data[i].carpark == val)
            {
                strcpy(results[total].location, data[i].location);
                strcpy(results[total].city, data[i].city);
                strcpy(results[total].price, data[i].price);
                strcpy(results[total].rooms, data[i].rooms);
                strcpy(results[total].bathroom, data[i].bathroom);
                strcpy(results[total].carpark, data[i].carpark);
                strcpy(results[total].type, data[i].type);
                strcpy(results[total].furnish, data[i].furnish);
                total++;
            }
            else
            {
                nf++;
            }
        }
    }
    else if (strcmp(column, "type") == 0)
    {
        tolower(val);
        for (i = 0; i < 3940; i++)
        {
            char *res = tolower(data[i].type);
            if (strcmp(res, val) == 0)
            {
                strcpy(results[total].location, data[i].location);
                strcpy(results[total].city, data[i].city);
                strcpy(results[total].price, data[i].price);
                strcpy(results[total].rooms, data[i].rooms);
                strcpy(results[total].bathroom, data[i].bathroom);
                strcpy(results[total].carpark, data[i].carpark);
                strcpy(results[total].type, data[i].type);
                strcpy(results[total].furnish, data[i].furnish);
                total++;
            }
            else
            {
                nf++;
            }
        }
    }
    else if (strcmp(column, "furnish") == 0)
    {
        tolower(val);
        for (i = 0; i < 3940; i++)
        {
            char *res = tolower(data[i].furnish);
            if (strcmp(res, val) == 0)
            {
                strcpy(results[total].location, data[i].location);
                strcpy(results[total].city, data[i].city);
                strcpy(results[total].price, data[i].price);
                strcpy(results[total].rooms, data[i].rooms);
                strcpy(results[total].bathroom, data[i].bathroom);
                strcpy(results[total].carpark, data[i].carpark);
                strcpy(results[total].type, data[i].type);
                strcpy(results[total].furnish, data[i].furnish);
                total++;
            }
            else
            {
                nf++;
            }
        }
    }
    else
    {
        if (nf == i)
        {
            printf("Not Found!\n");
        }
        else
        {
            printf("%-30s %-15s %-10s %-10s %-10s %-10s %-10s %-10s\n", menust[0].menu, menust[1].menu, menust[2].menu, menust[3].menu, menust[4].menu, menust[5].menu, menust[6].menu, menust[7].menu);
            for (int k = 0; k < total; k++)
            {
                printf("%-30s %-15s %-10s %-10s %-10s %-10s %-10s %-10s \n", results[k].location, results[k].city, results[k].price, results[k].rooms, results[k].bathroom, results[k].carpark, results[k].type, results[k].furnish);
            }
        }
    }
}

void sortData()
{
    char column[100], val[100];
    struct menu menust[8];
    struct column data[3950];

    printf("Choose column:");
    scanf("%s", column);
    printf("Sort ascending or descending?");
    scanf("%s", val);
    puts("");

    tolower(column);
    
}

void exportData()
{
    printf("this export\n");
}