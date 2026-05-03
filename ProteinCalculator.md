# 🥗 Protein Calculator & Food Recommender

## 📌 Algorithm

---

### 🔹 STEP 1: Start
- Begin program execution

---

### 🔹 STEP 2: Declare Variables
- Declare:
  - `weight` (float)
  - `protein_need` (float)
  - `activity` (int)
  - `diet` (string)

- Define a structure `Food` with:
  - `name`
  - `protein`
  - `calories`
  - `type`

---

### 🔹 STEP 3: Initialize Food Data
- Create an array `foods[]`
- Store food items with:
  - Name (e.g., Paneer, Chicken)
  - Protein per 100g
  - Calories per 100g
  - Diet type (`veg / nonveg / vegan / egg`)

---

### 🔹 STEP 4: Take User Input (Weight)
- Display: `"Enter your weight"`
- Read value into `weight`

---

### 🔹 STEP 5: Take Activity Level
- Display options:
  - 1. Sedentary  
  - 2. Light  
  - 3. Moderate  
  - 4. Active  

- Read input into `activity`

---

### 🔹 STEP 6: Calculate Protein Requirement
- If `activity == 1` → `protein_need = 0.8 × weight`
- Else if `activity == 2` → `protein_need = 1.0 × weight`
- Else if `activity == 3` → `protein_need = 1.2 × weight`
- Else if `activity == 4` → `protein_need = 1.5 × weight`
- Else:
  - Print `"Invalid activity"`
  - Stop program

---

### 🔹 STEP 7: Display Protein Requirement
- Print: `"Protein needed = X grams"`

---

### 🔹 STEP 8: Take Diet Type
- Ask user:
  - `veg / nonveg / vegan / egg`
- Store input in `diet`

---

### 🔹 STEP 9: Recommend Foods
- Loop through all food items:

```c
FOR each food in foods[]:
    IF food.type == diet:
        Print food name
        Print protein per 100g
        Print calories per 100g

```
#include <stdio.h>
#include <string.h>

// Simple structure
struct Food {
    char name[30];
    float protein;
    float calories;
    char type[15]; // "veg", "nonveg", "vegan", "egg"
};

int main() {
    float weight, protein_need;
    int activity;
    char diet[20];

    // Simple food list
    struct Food foods[] = {
        {"Paneer", 18, 265, "veg"},
        {"Lentils", 9, 116, "veg"},
        {"Soybean", 36, 446, "vegan"},
        {"Tofu", 8, 76, "vegan"},
        {"Egg", 13, 155, "egg"},
        {"Chicken", 31, 165, "nonveg"},
        {"Fish", 22, 206, "nonveg"}
    };

    int n = 7;

    // Input weight
    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    // Activity level
    printf("\nSelect activity level:\n");
    printf("1. Sedentary\n2. Light\n3. Moderate\n4. Active\n");
    printf("Enter choice: ");
    scanf("%d", &activity);

    // Simple protein calculation
    if(activity == 1) protein_need = 0.8 * weight;
    else if(activity == 2) protein_need = 1.0 * weight;
    else if(activity == 3) protein_need = 1.2 * weight;
    else if(activity == 4) protein_need = 1.5 * weight;
    else {
        printf("Invalid activity!\n");
        return 0;
    }

    printf("\nProtein needed: %.2f g\n", protein_need);

    // Diet input
    printf("\nEnter diet (veg / nonveg / vegan / egg): ");
    scanf("%s", diet);

    printf("\n--- Recommended Foods ---\n");

    // Simple filtering
    for(int i = 0; i < n; i++) {
        if(strcmp(diet, foods[i].type) == 0) {
            printf("%s - %.1f g protein, %.0f kcal per 100g\n",
                   foods[i].name,
                   foods[i].protein,
                   foods[i].calories);
        }
    }

    return 0;
}


```


