#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    float principal, rate, time;
    double simple_interest, compound_interest;

    printf("Enter Principal Amount (P): ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (R - in %%): ");
    scanf("%f", &rate);
    printf("Enter Time Period (T - in years): ");
    scanf("%f", &time);

    // 1. Calculate Simple Interest (SI)
    simple_interest = (principal * rate * time) / 100.0;

    // 2. Calculate Compound Interest (CI)
    // Formula: CI = P * (1 + R/100)^T - P
    compound_interest = principal * (pow((1 + rate / 100.0), time));
    compound_interest = compound_interest - principal;


    printf("\n--- Interest Calculation ---\n");
    printf("Simple Interest (SI):    %.2lf\n", simple_interest);
    printf("Compound Interest (CI):  %.2lf\n", compound_interest);

    return 0;
}