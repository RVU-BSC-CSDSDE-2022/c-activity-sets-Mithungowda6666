#include<stdio.h>
struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;
Camel input();
void find_weight(Camel *c); //passing address variable
void output(Camel c);

int main() {
  Camel_radius = Camel input();
  Camel_height = Camel input();
  Camel_length = Camel input();
   find_weight(Camel *c);
  output(Camel c);
    return 0;
  
}

Camel input() {
  float c;
  printf("Enter the value of Radius\n");
  scanf("%f",&c.radius);
  printf("Enter the value of Height\n");
  scanf("%f",&c.height);
  printf("Enter the value of Length\n");
  scanf("%f",&c.length);
  return (c);
}
void find_weight(Camel *c){
  
  *c_weight = pi*pow(radius,3)*sqrt(height * length);
}
void output(Camel c) {
  printf("The weight of the camel with radius: %f, height: %f, length: %f is %f",Camel.radius,Camel.lenght,Camel.height,*c.weight);
}