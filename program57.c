#include <stdio.h>
#include <stdlib.h>


struct Transaction {
    int id;
    float amount;
    struct Transaction *next;
};

struct Transaction *head = NULL;


void addTransaction() {
    struct Transaction *newNode;
    newNode = (struct Transaction *)malloc(sizeof(struct Transaction));

    printf("\nEnter transaction ID: ");
    scanf("%d", &newNode->id);

    printf("Enter amount: ");
    scanf("%f", &newNode->amount);

    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Transaction *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    printf("Transaction added successfully.\n");
}


void displayTransactions() {
    struct Transaction *temp = head;

    if (head == NULL) {
        printf("\nNo transactions found.\n");
        return;
    }

    printf("\nTransaction History:\n");
    while (temp != NULL) {
        printf("ID: %d | Amount: %.2f\n", temp->id, temp->amount);
        temp = temp->next;
    }
}


void deleteTransaction() {
    int id;
    struct Transaction *temp = head;
    struct Transaction *prev = NULL;

    if (head == NULL) {
        printf("\nNo transactions to delete.\n");
        return;
    }

    printf("\nEnter transaction ID to delete: ");
    scanf("%d", &id);

    if (temp != NULL && temp->id == id) {
        head = temp->next;
        free(temp);
        printf("Transaction deleted.\n");
        return;
    }

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Transaction not found.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Transaction deleted.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Transaction History Manager ---");
        printf("\n1. Add Transaction");
        printf("\n2. Display Transactions");
        printf("\n3. Delete Transaction");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTransaction();
                break;
            case 2:
                displayTransactions();
                break;
            case 3:
                deleteTransaction();
                break;
            case 4:
                printf("\nExiting program.\n");
                return 0;
            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }
}