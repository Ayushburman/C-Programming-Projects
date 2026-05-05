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
