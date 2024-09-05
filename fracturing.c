// Kamille O'Connor
// UCF ID 5614336
// 9.5.2024
// COP3223 Section 0V06

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Extra Function
double askForUserInput() {
  int x1 = 0;
  int y1 = 0;
  int x2 = 0;
  int y2 = 0;
  /*
  printf("Please enter x1:");
  scanf(" %d", &x1);
  printf("Please enter y1:");
  scanf(" %d", &y1);
  printf("Please enter x2:");
  scanf(" %d", &x2);
  printf("Please enter y2:");
  scanf(" %d", &y2);
  printf("You have entered the following points: (%d, %d) and (%d, %d)\n", x1, y1, x2, y2);
  */
}

// Distance Calculation
double calculateDistance() {
  int x1 = 5;
  int y1 = 4;
  int x2 = 2;
  int y2 = 3;
  int distance = round(sqrt(pow((x2-x1), 2) + pow((y2-y1), 2)));
  printf("Point 1 entered: x = %d, y = %d\n", x1, y1);
  printf("Point 2 entered: x = %d, y = %d\n", x2, y2);
  printf("The distance between the two points is: %d\n", distance);
  return distance;
}

// Perimeter Calculation
double calculatePerimeter() {
  int Perim = (2*calculateDistance())*PI;
  printf("The perimeter of the city encompassed by your request is %d\n", Perim);
  return 4;
}

// Area Calculation
double calculateArea() {
  int Area = pow(calculateDistance(), 2)*PI;
  printf("The area of the city encompassed by your request is %d\n", Area);
  return 2;
}

// Width Calculation
double calculateWidth() {
  int width = calculateDistance()*2;
  printf("The width of the city encompassed by your request is %d\n", width);
  return 2;
}

// Height Calculation
double calculateHeight() {
  int height = calculateDistance()*2;
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
