#include <stdio.h>

// Arrays for up to 3 items
char names[3][20];  // Short item names (no spaces)
float prices[3];
int quantities[3];
int itemCount = 0;

int main() {
    // Loop to add items
    for (int i = 0; i < 3; i++) {
        printf("Add item %d (or type 'stop' to finish): ", i + 1);
        scanf("%s", names[i]);
        
        if (strcmp(names[i], "stop") == 0) {
            break;  // Stop adding if user types 'stop'
        }
        
        printf("Price: ");
        scanf("%f", &prices[i]);
        
        printf("Quantity: ");
        scanf("%d", &quantities[i]);
        
        itemCount++;
    }
    
    // Calculate and show bill
    float total = 0.0;
    for (int i = 0; i < itemCount; i++) {
        total += prices[i] * quantities[i];
    }
    
    printf("Total Bill: %.2f\n", total);
    return 0;
}
