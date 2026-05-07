#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char alphabet;

    // List of countries
    char countries[][30] = {
        "India",
        "Australia",
        "Argentina",
        "Brazil",
        "Canada",
        "China",
        "Denmark",
        "Egypt",
        "France",
        "Germany",
        "Hungary",
        "Indonesia",
        "Japan",
        "Kenya",
        "Mexico",
        "Nepal",
        "Oman",
        "Pakistan",
        "Qatar",
        "Russia",
        "Spain",
        "Turkey",
        "Ukraine",
        "Vietnam",
        "Yemen",
        "Zimbabwe"
    };

    int total = sizeof(countries) / sizeof(countries[0]);
    int found = 0;

    // User input
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    // Convert to uppercase
    alphabet = toupper(alphabet);

    printf("\nCountries starting with '%c':\n\n", alphabet);

    // Search countries
    for (int i = 0; i < total; i++) {
        if (toupper(countries[i][0]) == alphabet) {
            printf("%s\n", countries[i]);
            found++;
        }
    }

    // If no country found
    if (found == 0) {
        printf("No country found starting with '%c'\n", alphabet);
    }

    return 0;
}
