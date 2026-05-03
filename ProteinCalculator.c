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
