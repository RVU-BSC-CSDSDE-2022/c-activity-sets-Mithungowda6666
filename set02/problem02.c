#include <stdio.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main() {
  float radius, height, lenght;
  input(radius, height, lenght);
    return 0;
}
void input_camel_details(float *radius, float *height, float *length){
  float weight, pi;
  printf("Enter the value of the Radius");
  scanf("%f",&radius);
  printf("Enter the value of the Height");
  scanf("%f",&height);
  printf("Enter the value of Length");
  scanf("%f",&length);  
  find_weight(radius,height,length,&weight);
  output(radius,height,length,weight);
}
float find_weight(float radius, float height, float length){
   float pi = 3.14;
  weight = (pi * stomach_radius^3 * sqrt(height * length));
   return weight;

}
void output(float radius, float height, float length, float weight){
  printf("The weight of the camel with radius: %f height:%f, length:%f is %f",radius,height,length,weight);
}
