Algorithm: Protein Calculator & Food Recommender
🔹 STEP 1: Start
Begin program execution
🔹 STEP 2: Declare Variables

Declare:
weight (float)
protein_need (float)
activity (int)
diet (string)
Define a structure Food with:
name
protein
calories
type

🔹 STEP 3: Initialize Food Data
Create an array foods[]
Store food items with:
name (e.g., Paneer, Chicken)
protein per 100g
calories per 100g
diet type (veg / nonveg / vegan / egg)
🔹 STEP 4: Take User Input (Weight)
Display: "Enter your weight"
Read value into weight
🔹 STEP 5: Take Activity Level
Display options:
Sedentary
Light
Moderate
Active
Read input into activity
🔹 STEP 6: Calculate Protein Requirement
IF activity = 1 → protein_need = 0.8 × weight
ELSE IF activity = 2 → protein_need = 1.0 × weight
ELSE IF activity = 3 → protein_need = 1.2 × weight
ELSE IF activity = 4 → protein_need = 1.5 × weight
ELSE:
Print "Invalid activity"
STOP program
🔹 STEP 7: Display Protein Requirement
Print: "Protein needed = X grams"
🔹 STEP 8: Take Diet Type
Ask user:
veg / nonveg / vegan / egg
Store in diet
🔹 STEP 9: Recommend Foods
Loop through all food items:
FOR each food in foods[]:
IF food.type == diet:
Print:
food name
protein per 100g
calories per 100g
🔹 STEP 10: End Program
Terminate program
