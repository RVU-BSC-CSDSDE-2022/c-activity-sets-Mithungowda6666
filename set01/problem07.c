#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main(){
  int n,sum;
  n = input_n();
  sum = sum_n_nos(n);
  output(n,sum);
  
}
int input_n(){
  int x;
  printf("enter the the number\n");
  scanf("%d" , &x);
  return(x);
}

int sum_n_nos(int n) {
  n = (n*(n+1))/2;//use for loop
  return (n);
}
void output(int n, int sum){
  printf("the sum of %d natural number is %d",n,sum);//1+2+3+...+n is sum
  }