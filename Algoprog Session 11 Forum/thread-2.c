#include <stdio.h>
#include <stdlib.h>

void main_menu();
void get_entity();
void produce_design();
void generate_report();
void collate_entities();

int main () {
    int choice;

    while (1) {
        main_menu();
        printf("Enter Number (1-4): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            get_entity();
            break;
        case 2:
            produce_design();
            collate_entities();
            break;
        case 3:
            generate_report();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid Input");
            break;
        }

        // Pause for a moment (platform-independent)
        printf("Press Enter to continue...");
        getchar();
        getchar(); // Wait for Enter key press

        // Clear the terminal screen based on the operating system
        #ifdef _WIN32
        system("cls");
        #else
        system("clear");
        #endif
    }

    return 0;
}

void main_menu() {
    printf("1. Get Design Entity\n");
    printf("2. Produce Design Reports\n");
    printf("3. Generate Report\n");
    printf("4. Exit\n");
}

void get_entity () {
    printf("Get Design Entity Successfully\n");
}

void produce_design () {
    printf("Producing Design...\n");
}

void collate_entities () {
    printf("Collating Entities Successfully\n");
}

void generate_report () {
    printf("Generating Report Successfully\n");
}

