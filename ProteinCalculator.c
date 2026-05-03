Algorithm: Protein Calculator & Food Recommender
🔹 STEP 1: Start
Begin program execution

🔹 STEP 2: Declare Variables



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
  


