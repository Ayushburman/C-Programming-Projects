#include <stdio.h>
#include <string.h>

// House indices
#define GRYFFINDOR 0
#define SLYTHERIN 1
#define RAVENCLAW 2
#define HUFFLEPUFF 3
// Function to find max index
int maxIndex(int arr[]) {
    int max = arr[0], idx = 0;
    for(int i = 1; i < 4; i++) {
        if(arr[i] > max) {
            max = arr[i];
            idx = i;
  }
    }
    return idx;
}
// Wand selection
void getWand(int house) {
    printf("\n--- Your Wand ---\n");
    switch(house) {
        case GRYFFINDOR:
  printf("Core: Phoenix Feather\nWood: Holly\nLength: 11 inches\n");
            break;
        case SLYTHERIN:
            printf("Core: Dragon Heartstring\nWood: Yew\nLength: 12.5 inches\n");
            break;
        case RAVENCLAW:
            printf("Core: Unicorn Hair\nWood: Willow\nLength: 10.75 inches\n");
            break;
        case HUFFLEPUFF:
            printf("Core: Unicorn Hair\nWood: Oak\nLength: 11.25 inches\n");
            break;
    }
}
// Pet selection
void getPet(int house) {
    printf("\n--- Your Magical Pet ---\n");
    switch(house) {
        case GRYFFINDOR:
            printf("A loyal Owl\n");
            break;
        case SLYTHERIN:
            printf("A cunning Snake\n");
            break;
        case RAVENCLAW:
            printf("A wise Raven\n");
            break;
        case HUFFLEPUFF:
            printf("A friendly Cat\n");
            break;
    }
}
// Patronus
void getPatronus(int house) {
    printf("\n--- Your Patronus ---\n");
    switch(house) {
        case GRYFFINDOR:
            printf("Stag\n");
            break;
        case SLYTHERIN:
            printf("Serpent\n");
            break;
        case RAVENCLAW:
            printf("Eagle\n");
            break;
        case HUFFLEPUFF:
            printf("Badger\n");
            break;
    }
}
int main() {

    int score[4] = {0};
    int choice;

    printf("====================================\n");
    printf("   Welcome to the Hogwarts Quiz\n");
    printf("====================================\n");
 // Q1
    printf("\nQ1: You find a locked ancient door. What do you do?\n");
    printf("1. Break it open\n2. Find hidden mechanism\n3. Analyze runes\n4. Knock politely\n");
    scanf("%d", &choice);

    if(choice == 1) { score[GRYFFINDOR]+=3; score[SLYTHERIN]+=1; }
    else if(choice == 2) { score[SLYTHERIN]+=3; score[RAVENCLAW]+=1; }
    else if(choice == 3) { score[RAVENCLAW]+=3; }
    else { score[HUFFLEPUFF]+=3; }
 // Q2
    printf("\nQ2: A friend cheats in exam. You...\n");
    printf("1. Confront\n2. Ignore\n3. Understand reason\n4. Help them improve later\n");
    scanf("%d", &choice);

    if(choice == 1) score[GRYFFINDOR]+=3;
    else if(choice == 2) score[SLYTHERIN]+=2;
    else if(choice == 3) score[RAVENCLAW]+=3;
    else score[HUFFLEPUFF]+=3;

// Q3
    printf("\nQ3: What motivates you most?\n");
    printf("1. Glory\n2. Power\n3. Knowledge\n4. Loyalty\n");
    scanf("%d", &choice);

    if(choice == 1) score[GRYFFINDOR]+=3;
    else if(choice == 2) score[SLYTHERIN]+=3;
    else if(choice == 3) score[RAVENCLAW]+=3;
    else score[HUFFLEPUFF]+=3;
 // Q4
    printf("\nQ4: Choose a magical subject:\n");
    printf("1. Defense Against Dark Arts\n2. Potions\n3. Astronomy\n4. Herbology\n");
    scanf("%d", &choice);

    if(choice == 1) score[GRYFFINDOR]+=3;
    else if(choice == 2) score[SLYTHERIN]+=3;
    else if(choice == 3) score[RAVENCLAW]+=3;
    else score[HUFFLEPUFF]+=3;

// Q5
    printf("\nQ5: You see a creature in danger:\n");
    printf("1. Jump in immediately\n2. Plan rescue\n3. Study first\n4. Call others\n");
    scanf("%d", &choice);
