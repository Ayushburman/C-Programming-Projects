#include <stdio.h>

int main() {
    int score = 0;
    int choice;

    printf("===== URINE ANALYSIS SYSTEM =====\n");
    printf("Answer the following questions:\n\n");

 // Q1: Color
    printf("1. What is your urine color?\n");
    printf("1. Pale Yellow (Normal)\n");
    printf("2. Dark Yellow\n");
    printf("3. Red / Brown\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

  if(choice == 1) score += 2;
    else if(choice == 2) score += 1;
    else score -= 2;
