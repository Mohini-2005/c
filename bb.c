    while (1) { // Loop for ordering
        printf("Enter item number (1-3) or 0 to finish: ");
        scanf("%d", &choice);
        if (choice == 0) break; // Conditional to exit
        if (choice >= 1 && choice <= 3) { // Conditional for valid choice
            printf("Enter quantity: ");
            scanf("%d", &qty);
            quantities[choice - 1] += qty; // Update array
        } else {
            printf("Invalid choice.\n");
        }
    }
    // Calculate total using loop
    for (int i = 0; i < 3; i++) {
        total += quantities[i] * prices[i];
    }
    // Print bill using loop and conditional
    printf("\nBill:\n");
    for (int i = 0; i < 3; i++) {
        if (quantities[i] > 0) { // Conditional to print only ordered items
            printf("%s: %d x $%.2f = $%.2f\n", items[i], quantities[i], prices[i], quantities[i] * prices[i]);
        }
    }
    printf("Total: $%.2f\n", total);
    return 0;
}