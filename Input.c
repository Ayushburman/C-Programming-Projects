#include <stdio.h>
int main(){
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";


    printf("Enter Your Name: ");
    scanf("%s", name);
    printf("Enter Your Age: ");
    scanf("%d",&age);
    printf("Enter Your GPA: ");
    scanf("%f",&gpa);
    printf("Enter Your Grade: ");
    scanf(" %c",&grade);



    printf("%d\n",age);
    printf("%f\n",gpa);
    printf("%c\n",grade);
    printf("%s\n",name);



    return 0;
}