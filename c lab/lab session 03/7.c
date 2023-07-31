#include<stdio.h>
int main()
{
    float  radi;
    printf("Enter the radius of the circle :");
    scanf("%f",&radi);
    printf("Diameter is %.2f \n",radi*2.0);
    printf("Circumference is %.2f \n",radi*2.0*3.14159);
    printf("Area is %.2f \n",radi*radi*3.14159);
}
