#include<stdio.h>
int main()
{
    int number;
    printf("Enter an integer:");
    scanf("%d",&number);
    switch(number%2)
    {
    case 0:
        printf("%d is even number \n",number);break;
    case 1:
        printf("%d is odd number\n",number);break;
    }
}
