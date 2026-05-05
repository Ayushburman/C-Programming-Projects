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
