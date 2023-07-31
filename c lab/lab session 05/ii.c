#include<stdio.h>
int main()
{
int num,rem,rev=0;
 printf("Enter a number: ");
 scanf("%d", &num);
 do{
 rem=num%10;
 rev=rem+(rev*10);
 num/=10;
 } while (num!=0);
 printf("%d",rev);
}
