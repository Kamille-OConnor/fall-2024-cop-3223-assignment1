// Kamille O'Connor
// UCF ID 5614336
// 9.8.2024
// COP3223 Section 0V06

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Helper Function 1
double printPoints(){
  int x1 = 5;
  int y1 = 4;
  int x2 = 2;
  int y2 = 3;
  double distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
  printf("Point 1 entered: x1 = %d, y1 = %d\n", x1, y1);
  printf("Point 2 entered: x2 = %d, y2 = %d\n", x2, y2);
  return distance;
}

// Distance Calculation
double calculateDistance() {
  double distance = printPoints()*1;
  printf("The distance between the two points is %lf\n", distance);
  return distance;
}

// Perimeter Calculation
double calculatePerimeter() {
  int Perim = (2*printPoints())*PI;
  printf("The perimeter of the city encompassed by your request is %d\n", Perim);
  return 4;
}

// Area Calculation
double calculateArea() {
  int Area = pow(printPoints(), 2)*PI;
  printf("The area of the city encompassed by your request is %d\n", Area);
  return 2;
}

// Width Calculation
double calculateWidth() {
  int width = printPoints()*2;
  printf("The width of the city encompassed by your request is %d\n", width);
  return 2;
}

// Height Calculation
double calculateHeight() {
  int height = printPoints()*2;
  printf("The height of the city encompassed by your request is %d\n", height);
  return 2;
}

int main(int argc, char **argv) {
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();
  return 0;
}
