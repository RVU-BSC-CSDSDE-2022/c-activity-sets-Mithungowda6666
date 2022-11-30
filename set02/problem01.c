#include <stdio.h>
#include <math.h>
Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main() {
	float x1, y1, x2, y2, gdistance;
  x1 = input();
  x2 = input();
  y1 = input();
  y1 = input();
  gdistance = input();
  dist(Point a, Point b, float *res);  
  output(point a,point b, float res);
    return 0;
    }
  
point input()
{
    printf("Input x1: ");
	scanf("%f", &x1);
	printf("Input y1: ");
	scanf("%f", &y1);
  printf("Input x2: ");
	scanf("%f", &x2);
	printf("Input y2: ");
	scanf("%f", &y2);
  
	gdistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance between the said points: %.4f", sqrt(gdistance));
	printf("\n");
	return 0;
}