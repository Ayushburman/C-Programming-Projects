#ifndef PROTEIN_H
#define PROTEIN_H
// ─────────────────────────────────────────
//  Diet types
// ─────────────────────────────────────────
typedef enum {
    DIET_VEG        = 1,
    DIET_NONVEG     = 2,
    DIET_VEGAN      = 3,
    DIET_EGGETARIAN = 4
} DietType;
// ─────────────────────────────────────────
//  Activity levels
// ─────────────────────────────────────────
typedef enum {
    ACTIVITY_SEDENTARY  = 1,  // desk job, no exercise
    ACTIVITY_LIGHT      = 2,  // light exercise 1-3 days/week
    ACTIVITY_MODERATE   = 3,  // moderate exercise 3-5 days/week
    ACTIVITY_ACTIVE     = 4,  // hard exercise 6-7 days/week
    ACTIVITY_ATHLETE    = 5   // professional athlete / bodybuilder
} ActivityLevel;
// ─────────────────────────────────────────
//  Food item
// ─────────────────────────────────────────
typedef struct {
    char name[32];
    char category[16];       // "legume", "dairy", "meat", etc.
    double protein_per_100g; // grams of protein per 100g food
  double calories_per_100g;
    int diet_flags;          // bitmask: VEG=1, NONVEG=2, VEGAN=4, EGG=8
} Food;

// diet_flags bitmask values
#define FLAG_VEG    (1 << 0)
#define FLAG_NONVEG (1 << 1)
#define FLAG_VEGAN  (1 << 2)
#define FLAG_EGG    (1 << 3)
// ─────────────────────────────────────────
//  Function declarations
// ─────────────────────────────────────────
double calculate_protein(double weight_kg, ActivityLevel level);
void   show_activity_guide(void);
void   recommend_foods(DietType diet, double protein_target);
void   show_meal_plan(DietType diet, double protein_target);
const char *diet_name(DietType d);
const char *activity_name(ActivityLevel a);
 
#endif
 
