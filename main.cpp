#include <iostream>
#include "Konwerter.h"

void menu(void) {
    printf("\n");
    printf("0 - Exit\n");
    printf("1 - Add\n");
    printf("Select an option:\n");
}


int main() {
    int option=0;
    do {
        menu();
        scanf("%d", &option);
        switch (option) {
            case 0:
                break;

            default:
                printf("Choose the right option...\n\n");
        }
    } while (option != 0);
    return 0;
}
