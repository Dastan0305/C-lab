#include <stdio.h>
int main()
{
    //Question number 4
    float radi;
    printf("Enter the Radius of the circle \n");
    scanf("%f",&radi);
    printf("Diameter is %.2f \n",radi*2.0);
    printf("Circumference id %.2f \n",radi*2.0*3.14159);

    //Question number 5
    int num1,num2;

    printf("Enter the first number \n");
    scanf("%d",&num1);
    printf("Enter the second number \n");
    scanf("%d",&num2);

    if(num1%num2==0)
    printf("%d is multiple of %d \n",num1,num2);
    else
    printf("%d is not multiple of %d \n",num1,num2);


    //Question  number 6
    printf("A = %d\n",'A');
    printf("B = %d\n",'B');
    printf("C = %d\n",'C');
    printf("a = %d\n",'a');
    printf("b = %d\n",'b');
    printf("c = %d\n",'c');
    printf("0 = %d\n",'0');
    printf("1 = %d\n",'1');
    printf("2 = %d\n",'2');
    printf("$ = %d\n",'$');
    printf("* = %d\n",'*');
    printf("+ = %d\n",'+');
    printf("/ = %d\n",'/');
    printf("Blank character = %d\n",' ');
    return 0;
}
