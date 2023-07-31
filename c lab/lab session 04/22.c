#include<stdio.h>
int main()
{


int choice;
 float radius, PI = 3.14159;
 printf("Menu:\n");
 printf("1. Calculate the circumference of a circle\n");
 printf("2. Calculate the area of a circle\n");
 printf("3. Calculate the volume of a sphere\n");
 printf("Enter your choice (1-3): ");
 scanf("%d", &choice);
 printf("Enter the radius: ");
 scanf("%f", &radius);
 switch (choice) {
 case 1: {
 float circumference = 2 * PI * radius;
 printf("Circumference: %.2f\n", circumference);
 break;
 }
 case 2: {
 float area = PI * radius * radius;
 printf("Area: %.2f\n", area);
 break;
 }
 case 3: {
 float volume = (4.0 / 3.0) * PI * (radius, 3);
 printf("Volume: %.2f\n", volume);
 break;
 }
 default:
 printf("Invalid choice\n");
 break;
 }
}
