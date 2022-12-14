#include<stdio.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length)
void output(float radius, float height, float length, int mood);

int main() {
  int a;
   input_camel(&radius,&height,&length);
   a = find_mood(radius,height,length);
   output(radius,height,length,mood);
   return  0;
  }

void input_camel(float *radius, float *height, float *length) {
  printf("Enter the value of the radius");
  scanf("%f",&radius);
  printf("Enter the value of the height");
  scanf("%f",&height);
  printf("Enter the value of the length");
  scanf("%f",&lenght);
}
int find_mood(float radius, float height, float length) { 
  int a;
  
  if((radius<height) && (radius<length))
  {
    return 1;
  }
  if((height<radius) && (height<lenght))
  {
    return 2;
  }
  if((lenght<height) && (length<radius))
  {
    return 3;
  }
  return a;
}
void output(float radius, float height, float length, int mood) {
  if(mood==1) 
  {
    printf("the Camel is Sick");
  }
  if(mood==2)
  {
    printf("the Camel is Happy");
  }
  if(mood==3)
  {
    printf("The Camel is Tense");
  }
}

