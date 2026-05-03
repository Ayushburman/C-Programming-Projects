//An operator is a symbol that tells the compiler to perform a specific operation on one 
// or more operands. Think of it as a function written in shorthand — a + b is cleaner
//  than writing add(a, b) every time.

#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("a + b = %d\n", a + b);   // 13
    printf("a - b = %d\n", a - b);   // 7
    printf("a * b = %d\n", a * b);   // 30
    printf("a / b = %d\n", a / b);   // 3  ← truncated!
    printf("a %% b = %d\n", a % b);  // 1

    // Float division
    printf("a / b (float) = %.2f\n", (float)a / b); // 3.33

    //relational operators

    int c = 5, d = 3;

    printf("c == d : %d\n", c == d);  // 0
    printf("c != d : %d\n", c != d);  // 1
    printf("c > d  : %d\n", c > d);   // 1
    printf("c < d  : %d\n", c < d);   // 0

    // Relational result used in if
    if (c > d) {
        printf("a is greater\n");
    }
// bitwise operator
 #include <stdio.h>


    int A = 5;  // 0101 in binary
    int B = 3;  // 0011 in binary

    printf("A & B  = %d\n", A & B);   // 1  (0001)
    printf("A | B  = %d\n", A | B);   // 7  (0111)
    printf("A ^ B  = %d\n", A ^ B);   // 6  (0110)
    printf("~A     = %d\n", ~A);      // -6 (two's complement)
    printf("A << 1 = %d\n", A << 1);  // 10 (multiply by 2)
    printf("A >> 1 = %d\n", A >> 1);  // 2  (divide by 2)

    // Practical tricks:
    printf("\nIs A even? %s\n", (A & 1) ? "Odd" : "Even");
    printf("A * 8 via shift: %d\n", A << 3);  // 40
    printf("Swap without temp:\n");
    A = A ^ B; B = A ^ B; A = A ^ B;
    printf("A=%d, B=%d\n", A, B);

//
    int x = 5;  // 0101 in binary
    int y = 3;  // 0011 in binary

    printf("x & y  = %d\n", x & y);   // 1  (0001)
    printf("x | y  = %d\n", x | y);   // 7  (0111)
    printf("x ^ y  = %d\n", x ^ y);   // 6  (0110)
    printf("~x     = %d\n", ~x);      // -6 (two's complement)
    printf("x << 1 = %d\n", x << 1);  // 10 (multiply by 2)
    printf("x >> 1 = %d\n", x >> 1);  // 2  (divide by 2)

    // Practical tricks:
    printf("\nIs x even? %s\n", (x & 1) ? "Odd" : "Even");

    printf("x * 8 via shift: %d\n", x << 3);  // 40

    printf("Swap without temp:\n");

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("x=%d, y=%d\n", x, y);




    //

    int z = 10;

    z += 5;   printf("After +=5 : %d\n", z);   //15
    z -= 3;   printf("After -=3 : %d\n", z);   //12
    z *= 2;   printf("After *=2 : %d\n", z);   //24
    z /= 4;   printf("After /=4 : %d\n", z);   //6
    z %= 4;   printf("After %%=4 : %d\n", z);  //2

    // Chained assignment (right-to-left)
    int X, Y;
    X = Y = z = 100;

    printf("x=%d y=%d z=%d\n", X, Y, z); // all 100


    return 0;

}