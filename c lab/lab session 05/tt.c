#include<stdio.h>
int main()
{
int num,result=0;
 printf("enter a number:");
 scanf("%d",&num);
 if(num<0)
 printf("Error: Factorial of a negative number is undefined.");
 else if(num==0)
 printf("Error: Factorial of a negative number is undefined.");
 else
 for(int i=1;i<=num;i++)
 {
 result+=i;
 }
 printf("%d",result);
}
