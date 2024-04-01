#include <stdio.h>
#include <stdbool.h>

int print_menu()
{
    printf("Choose an option: \n");
    printf(" 1. List entries\n");
    printf(" 2. Show an entry\n");
    printf(" 3. Create a new entry\n");
    printf(" 4. Change entry\n");
    printf(" 5. Delete an entry\n");
    printf(" 6. Quit\n");

    printf(" > ");
    int option;
    scanf("%d", &option);
    return option;
}

void clear() {
    printf("\e[1;1H\e[2J");
}

void list_entries()
{
    clear();
    printf("=== LIST ENTRIES ===\n\n");
}

void show_entry()
{
    clear();
    printf("=== SHOW ENTRY ===\n\n");
}

void create_entry()
{
    clear();
    printf("=== CREATE NEW ENTRY ===\n\n");
}

void change_entry()
{
    clear();
    printf("=== CHANGE ENTRY ===\n\n");
}

void delete_entry()
{
    clear();
    printf("=== DELETE ENTRY ===\n\n");
}

int main()
{
    int option = 0;
    bool quit = false;
    while (!quit)
    {
        option = print_menu();

        switch (option)
        {
        case 1:
            list_entries();
            break;
        case 2:
            show_entry();
            break;
        case 3:
            create_entry();
            break;
        case 4:
            change_entry();
            break;
        case 5:
            delete_entry();
            break;
        default:
            printf("Quiting...\n");
            quit = true;
            break;
        }
    }
    return 0;
}