#include <stdio.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

void input_camel_details(float *radius, float *height, float *length){
  float weight;
  printf("Enter the value of the Radius");
  scanf("%f",&radius);
  printf("Enter the value of the Height");
  scanf("%f",&height);
  printf("Enter the value of Length");
  scanf("%f",&length);
  find_weight(radius,height,length,&weight);
  output
}