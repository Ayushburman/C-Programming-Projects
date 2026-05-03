#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int base, cheese, topping, size;
    int price = 0;

    //random name generator
    srand(time(0));
    char *names[] = {
        "Dragon Fire Pizza",
        "Galaxy Cheese Burst",
        "Inferno Supreme",
        "Royal italian Delight",
        "Spicy Volcano",
        "Mystic Margherita",
        "Ultimate Fusion Pizza"
    };

     printf("Welcome to 'BURM' best Pizzeria in INDIA \n\n");

     //BASE SELECTION
     printf("Choose your Base:\n");
     printf("1. Thin Crust\n2. Thick Crust\n3. Cheese Burst\n");
     scanf("%d", &base);

     switch (base)
     {
     case 1: price += 100; break;
     case 2: price += 120; break;
     case 3: price += 150; break;
     default:  printf("Invalid choice\n"); return 0;
        
     }
     printf("\nChoose your cheese:\n");
     printf("1. Mozzarella\n2. Cheddar\n3. Parmesan\n");
     scanf("%d", &cheese);

     switch(cheese) {
        case 1: price += 80; break;
        case 2: price += 90; break;
        case 3: price += 100; break;
        default: printf("Invalid choice\n"); return 0;
    }

    // Topping selection
    printf("\nChoose your Topping:\n");
    printf("1. Veggies\n2. Chicken\n3. Paneer\n");
    scanf("%d", &topping);

    switch(topping) {
        case 1: price += 70; break;
        case 2: price += 120; break;
        case 3: price += 100; break;
        default: printf("Invalid choice\n"); return 0;
    }
    
    // Size selection
    printf("\nChoose Pizza Size:\n");
    printf("1. Small\n2. Medium\n3. Large\n");
    scanf("%d", &size);

    switch(size) {
        case 1: price += 100; break;
        case 2: price += 150; break;
        case 3: price += 200; break;
        default: printf("Invalid choice\n"); return 0;
    }

// Random pizza name
    int randomIndex = rand() % 7;

    // Final Output
    printf("\n==============================\n");
    printf("Here's your pizza: %s\n", names[randomIndex]);
    printf("Please pay: $ %d\n", price);
    printf("==============================\n");

    return 0;
}






