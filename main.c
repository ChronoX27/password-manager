#include <stdio.h>


int print_menu(){
    printf("Choose an option: \n");
    printf(" 1. List entries\n");
    printf(" 2. Show an entry\n");
    printf(" 3. Create a new entry\n");
    printf(" 4. Delete an entry\n");
    printf(" 5. Quit\n");

    printf(" > ");
    int option;
    scanf("%d", &option);
    return option;
}

void list_entries() {}
void show_entry() {}
void create_entry() {}
void delete_entry() {}

int main() {
    int option = 0;
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
        delete_entry();
        break;
    default:
        printf("Quiting...\n");
        break;
    }
    return 0;
}