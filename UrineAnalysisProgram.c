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
 // Q2: Frequency
    printf("\n2. How many times do you urinate per day?\n");
    printf("1. 4-7 times (Normal)\n");
    printf("2. Less than 3\n");
    printf("3. More than 10\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
 if(choice == 1) score += 2;
    else score -= 1;

    // Q3: Water intake
    printf("\n3. How much water do you drink daily?\n");
    printf("1. 2-3 Liters (Normal)\n");
    printf("2. Less than 1 Liter\n");
    printf("3. More than 5 Liters\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

if(choice == 1) score += 2;
    else score -= 1;

    // Q4: Burning sensation
    printf("\n4. Do you feel burning while urinating?\n");
    printf("1. No\n");
    printf("2. Sometimes\n");
    printf("3. Yes\n");
    printf("Enter choice: ");
    scanf("%d", &choice);


    if(choice == 1) score += 2;
    else if(choice == 2) score -= 1;
    else score -= 3;

// Q5: Odor
    printf("\n5. Urine odor?\n");
    printf("1. Normal\n");
    printf("2. Strong smell\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
