#include <stdio.h>
int sum_func(int a, int b, int sum);

int main(void){
int a,b,sum;
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
  scanf("%d",&b);
  sum=sum_func(a , b ,sum);
  printf("%d", sum);
  }


int sum_func(int a,int b,int sum )
{sum=a+b;
  return sum;
  }