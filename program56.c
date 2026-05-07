//RESTAURANT BILLING SYSTEM
#include<stdio.h>

int main() {
    int choice, quantity;
    float total = 0;
    char name[50];

    int burger = 0, pizza = 0, pasta = 0, sandwich = 0;

    printf("====== Welcome to Dilsefoodie Restaurant ======\n");

    printf("Enter customer name: "); 
   fgets(name, sizeof(name), stdin);

    do {
        printf("\nMenu:\n");
        printf("1. Burger - 50 Rs\n");
        printf("2. Pizza - 120 Rs\n");
        printf("3. Pasta - 100 Rs\n");
        printf("4. Sandwich - 60 Rs\n");
        printf("5. Exit\n");

        printf("Enter your choice[1-5]: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                burger += quantity;
                total += 50 * quantity;
                break;

            case 2:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                pizza += quantity;
                total += 120 * quantity;
                break;

            case 3:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                pasta += quantity;
                total += 100 * quantity;
                break;

            case 4:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                sandwich += quantity;
                total += 60 * quantity;
                break;

            case 5:
                printf("\nExiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 5);

    printf("\n====== BILL RECEIPT ======\n");
    printf("Customer Name: %s\n", name);

    printf("\nItems Ordered:\n");
    printf("-----------------------------\n");
    printf("Item\t\tQty\tPrice\n");

    if(burger > 0)
        printf("Burger\t\t%d\t%d\n", burger, burger * 50);

    if(pizza > 0)
        printf("Pizza\t\t%d\t%d\n", pizza, pizza * 120);

    if(pasta > 0)
        printf("Pasta\t\t%d\t%d\n", pasta, pasta * 100);

    if(sandwich > 0)
        printf("Sandwich\t%d\t%d\n", sandwich, sandwich * 60);

    printf("-----------------------------\n");
    printf("Total Amount = %.2f Rs\n", total);

    printf("\nThank you! Visit again.\n");

    return 0;
}