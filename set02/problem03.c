#include<stdio.h>
struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c); //passing address variable
void output(Camel c);

Camel input() {
  float a;
  printf("Enter the value of Radius\n");
  scanf("%f",&Camel.radius);
  printf("Enter the value of Height\n");
  scanf("%f",&Camel.height);
  printf("Enter the value of Length\n");
  scanf("%f",&Camel.length);
  return (a);
}
void find_weight(Camel *c){
  *c.weight = pi*pow(radius,3)*sqrt(height * length);
}
void output(Camel c) {
  printf("The weight of the camel with radius: %f, height: %f, length: %f is %f",
Write")
}