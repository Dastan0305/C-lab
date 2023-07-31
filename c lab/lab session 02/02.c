#include<stdio.h>
int main()
{
  int d,t,a;
  printf("Enter the distance of travel(m):");
  scanf("%d",&d);
  printf("Enter the time taken to travel(s):");
  scanf("%d",&t);
  a=d/t;
  printf("\n The average speed is: %dms^-1",a);
}

