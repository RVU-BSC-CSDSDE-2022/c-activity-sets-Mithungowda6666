#include <stdio.h>
#include<stdlib.h>
int sum_func(int a, int b, int sum);


int main(void)
{
 int a,b,sum;
  printf("enter the first number\n");
  if(scanf("%d",&a)!=1)
  {
    printf("error");
    exit(0);
  }
  printf("enter the second number\n");
  if(scanf("%d",&b)!=1)
  {
    printf("error");
    exit(0);
  }
  sum=sum_func(a , b ,sum);
  printf(" The sum is %d", sum);
  return 0;
}

int sum_func(int a, int b, int sum)

{
  sum=a+b;
  return sum;
}
