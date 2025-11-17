#include <stdio.h>
#include <string.h>

// Arrays to store up to 5 items
char names[5][50];  // Item names
float prices[5];    // Prices per item
int quantities[5];  // Quantities
int itemCount = 0;  // Number of items added

// Function to add an item
void addItem() {
    if (itemCount >= 5) {
        printf("Cannot add more items.\n");
        return;
    }
    
    printf("Enter item name: ");
    scanf(" %[\n]", names[itemCount]);  // Read name with spaces
    
    printf("Enter price: ");
    scanf("%f", &prices[itemCount]);
    
    printf("Enter quantity: ");
    scanf("%d", &quantities[itemCount]);
    
    itemCount++;
    printf("Item added!\n");
}

// Function to calculate and show bill
void calculateBill() {
    float total = 0.0;
    for (int i = 0; i < itemCount; i++) {
        total += prices[i] * quantities[i];
    }
    printf("Total Bill: %.2f\n", total);
}

int main() {
    int choice;
    
    while (1) {  // Menu loop
        printf("\n1. Add Item\n2. Calculate Bill\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            addItem();
        } else if (choice == 2) {
            calculateBill();
        } else if (choice == 3) {
            printf("Goodbye!\n");
            break;  // Exit loop
        } else {
            printf("Invalid choice.\n");
        }
    }
    
    return 0;
}
