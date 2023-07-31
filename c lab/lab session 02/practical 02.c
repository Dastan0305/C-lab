
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter the fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit-32)* 5/9;
    printf("\nfahrenheit:t%.3f\n\ncelsius:%3f\n",fahrenheit,celsius);
}


