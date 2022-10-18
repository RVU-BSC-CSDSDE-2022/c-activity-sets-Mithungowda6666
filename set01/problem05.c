#include <stdio.h>

int main()  {
  int x,y,z;
  printf("print 3 numbers");
  scanf("%d", &x);
  scanf("%d",&y);
  scanf("%d",&z);
 compare (  x, y,  z);
  }

int compare (int a, int b, int c)
{
  if(a>b & a>c)
  {
    printf("%d is the largest",a);
  }
  if(b>a & b>c){
    printf("%d is the largest",b);
  }
  if(c>a & c>b){
    printf("%d is the largest",c);
  } 
  }