#include <stdio.h>

int main()
{
  int a,b,add;
  printf("Enter the first number\n");
  scanf("%d",&a);
  printf("enter the second number\n");
  scanf("%d",&b);
  sum(a,b,&add);
  printf("%d\n",add);
}

int sum(int a,int b,int *add)
{
  *add=a+b;
}