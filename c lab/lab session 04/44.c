#include <stdio.h>
int main() {
 int choice;
 float no1, no2, result;
 printf("Menu-Driven Calculator\n");
 printf("1. Addition\n");
 printf("2. Subtraction\n");
 printf("3. Multiplication\n");
 printf("4. Division\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
 printf("Enter the first number: ");
 scanf("%f", &no1);
 printf("Enter the second number: ");
 scanf("%f", &no2);
 if (choice == 1) {
 result = no1 + no2;
 printf("Result: %.2f\n",result);
