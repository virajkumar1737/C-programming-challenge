#include <stdio.h>
#include <stdlib.h> // For calloc() and free()

typedef struct { 
    int id;
    float price;
} Product;

int main() {
    // Allocate memory for 3 Product structs, initializes all bytes to zero
    Product *p = (Product*)calloc(3, sizeof(Product));

    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Since calloc initializes to zero, this should print 0
    printf("Initialized ID of first product: %d\n", p[0].id);
    
    // Assign values to the second product (p[1])
    p[1].id = 202;
    p[1].price = 19.99f;
    
    printf("Product 2 ID: %d, Price: %.2f\n", p[1].id, p[1].price);

    free(p);
    return 0;
}