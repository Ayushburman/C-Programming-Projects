#include <stdio.h>

int main() {
    float distance, petrol, average;

    // Input distance travelled
    printf("Enter total distance travelled (in km): ");
    scanf("%f", &distance);

    // Input petrol used
    printf("Enter petrol used (in litres): ");
    scanf("%f", &petrol);

    // Calculate average
    average = distance / petrol;

    // Display result
    printf("\nVehicle Average = %.2f km/l\n", average);

    // Mileage category (Indian context)
    if (average >= 25) {
        printf("Excellent Mileage\n");
    }
    else if (average >= 15) {
        printf("Good Mileage\n");
    }
    else if (average >= 10) {
        printf("Average Mileage\n");
    }
    else {
        printf("Poor Mileage\n");
    }

    return 0;
}
