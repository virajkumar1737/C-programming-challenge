// Q22: Find profit or loss percentage
#include <stdio.h>

int main() {
    float cp, sp, profit, loss;
    
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    
    if (sp > cp) {
        profit = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%\n", profit);
    } 
    else if (cp > sp) {
        loss = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%\n", loss);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }
    
    return 0;
}