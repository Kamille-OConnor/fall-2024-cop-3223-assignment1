// Kamille O'Connor
// 9.5.2024
// COP3223 Section 0V06

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Distance Calculation: [(x2-x1)^2 + (y2-y1)^2] ^1/2
double calculateDistance() {
  int x1 = 5;
  int y1 = 4;
  int x2 = 2;
  int y2 = 3;
  int distance = round(sqrt(pow((x2-x1), 2) + pow((y2-y1), 2)));
  printf("Point 1 entered: x = %d, y = %d\n", x1, y1);
  printf("Point 2 entered: x = %d, y = %d\n", x2, y2);
  printf("The distance between the two points is: %d\n", distance);
}

// Perimeter Calculation
double calculatePerimeter() {
	int 
}

// Area Calculation
double calculateArea() {
}

// Width Calculation
double calculateWidth() {
}

// Height Calculation
double calculateHeight() {
}

// Extra Function
double askForUserInput() {
}

int main(int argc, char **argv) {
  calculateDistance();
  return 0;
}
