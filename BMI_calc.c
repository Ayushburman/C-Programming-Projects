#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input weight
    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    // Input height
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    // BMI Formula
    bmi = weight / (height * height);

    // Display BMI
    printf("\nYour BMI is: %.2f\n", bmi);

    // BMI Category
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Category: Normal weight\n");
    }
    else if (bmi >= 25 && bmi < 29.9) {
        printf("Category: Overweight\n");
    }
    else {
        printf("Category: Obese\n");
    }

    return 0;
}
