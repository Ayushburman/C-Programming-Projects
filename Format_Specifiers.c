#include <stdio.h>  
int main()  {
// A format specifier tells functions like printf() and scanf():
//General ->  %specifier
// printf("%d", 25);
// %d says: “Print this as an integer.”
int a = 10;
printf("%d\n", a);
//Also: %i works similarly.



//Float — %f
float x = 3.14;
printf("%f\n", x);
// Default shows 6 decimal places

printf("%.2f\n", x);
// 2 decimal places

//----------

// Double — %lf
double p = 5.6789;
printf("%lf\n", p);

//Character — %c
char grade='A';
printf("%c\n",grade);


// String — %s
char name[]="Ayush";
printf("%s\n",name);

//Long Integer — %ld
long n=123456789;
printf("%ld\n",n);

//Unsigned Integer — %u
unsigned int U =20;
printf("%u\n",U);

//Octal and Hexadecimal
printf("%o\n",10); // octal
printf("%x\n",10); // hexadecimal

}


