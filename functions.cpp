#include <stdio.h>
#include <string.h>

int indext = 0;

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

void storeData()
{
    struct menu menust[8];
    struct column data[3950];

    FILE *file = fopen("file.csv", "r");

    fscanf(file, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%s\n", menust[0].menu, menust[1].menu, menust[2].menu, menust[3].menu, menust[4].menu, menust[5].menu, menust[6].menu, menust[7].menu);
    while (!feof(file))
    {
        fscanf(file, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%s\n", data[indext].location, data[indext].city, data[indext].price, data[indext].rooms, data[indext].bathroom, data[indext].carpark, data[indext].type, data[indext].furnish);
        indext++;
    }
    fclose(file);
    if (data != NULL)
    {
        printf("Data Is Set\n");
    }
    else
    {
        printf("Err\n");
    }
}

void swap(struct column *a, struct column *b)
{
    struct column temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct column arr[], char data[100], char sort[100], int size)
{
    tolower(sort);
    tolower(data);

    if (strcmp(sort, "asc") == 0 || strcmp(sort, "ascending") == 0)
    {
        if (strcmp(data, "location") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].location, arr[j + 1].location) > 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
        else if (strcmp(data, "city") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].city, arr[j + 1].city) > 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
        else if (strcmp(data, "price") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].price, arr[j + 1].price) > 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
        else if (strcmp(data, "rooms") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].rooms, arr[j + 1].rooms) > 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
        else if (strcmp(data, "bathrooms") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].bathroom, arr[j + 1].bathroom) > 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
        else if (strcmp(data, "carpark") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].carpark, arr[j + 1].carpark) > 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
        else if (strcmp(data, "type") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].type, arr[j + 1].type) > 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
        else if (strcmp(data, "furnish") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].furnish, arr[j + 1].furnish) > 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
    }

    else if (strcmp(sort, "dsc") == 0 || strcmp(sort, "descending") == 0)
    {
        if (strcmp(data, "location") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].location, arr[j + 1].location) < 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }

        else if (strcmp(data, "city") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].city, arr[j + 1].city) < 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
        else if (strcmp(data, "price") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].price, arr[j + 1].price) < 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
        else if (strcmp(data, "rooms") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].rooms, arr[j + 1].rooms) < 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
        else if (strcmp(data, "bathrooms") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].bathroom, arr[j + 1].bathroom) < 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
        else if (strcmp(data, "carpark") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].carpark, arr[j + 1].carpark) < 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
        else if (strcmp(data, "type") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].type, arr[j + 1].type) < 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
        else if (strcmp(data, "furnish") == 0)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (strcmp(arr[j].furnish, arr[j + 1].furnish) < 0)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
    }
}

void sortData()
{
    struct menu menust[8];
    struct column data[3950];

    char cos[100], val[100];

    printf("Choose column:");
    scanf("%s", cos);
    getchar();
    printf("Sort ascending or descending?");
    scanf("%s", val);
    getchar();
    puts("");

    tolower(cos);

    printf("%-30s %-15s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
    for (int i = 0; i < 10; i++)
    {
        bubbleSort(data, cos, val, indext);
        printf("%-30s %-15s %-10s %-10s %-10s %-10s %-10s %-10s \n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
    }
}

void displayData()
{
    int rows;
    struct menu menust[8];
    struct column data[3950];

    printf("Number of rows:");
    scanf("%d", &rows);
    getchar();
    puts("");

    printf("%-30s %-15s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
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
    getchar();
    printf("What data you want to find? ");
    scanf("%s", val);
    getchar();
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
    if (nf == i)
    {
        printf("Not Found!\n");
    }
    else
    {
        printf("%-30s %-15s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
        for (int k = 0; k < total; k++)
        {
            printf("%-30s %-15s %-10s %-10s %-10s %-10s %-10s %-10s \n", results[k].location, results[k].city, results[k].price, results[k].rooms, results[k].bathroom, results[k].carpark, results[k].type, results[k].furnish);
        }
    }
}

void exportData()
{
    FILE *create;
    struct column data[3950];
    struct menu menust[8];

    char filename[100];
    int i = 0;

    printf("File name : ");
    scanf("%s", filename);
    getchar();

    filename[strcspn(filename, "\n")] = '\0'; // Remove the trailing newline character

    strcat(filename, ".csv");

    create = fopen(filename, "w");

    if (create != NULL)
    {
        fprintf(create, "%s,%s,%s,%s,%s,%s,%s,%s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
        while (i < indext)
        {
            fprintf(create, "%s,%s,%s,%s,%s,%s,%s,%s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
            i++;
        }

        printf("Data successfully written in %s!\n", filename);

        fclose(create); // Close the file after writing
    }
    else
    {
        printf("Error opening the file %s for writing!\n", filename);
    }
}