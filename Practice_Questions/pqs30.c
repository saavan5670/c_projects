// write funvtions to calculate area of square, a circle & a rectangle

#include<stdio.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);

int main() {
    float a = 5.0;
    float b = 10.0;

    printf("Area of square: %f\n", squareArea(a));
    printf("Area of circle: %f\n", circleArea(a));
    printf("Area of rectangle: %f\n", rectangleArea(a, b));

    return 0;
}
float squareArea(float side) {
    return side * side;
}
float circleArea(float radius) {
    return 3.14 * radius * radius;
}
float rectangleArea(float a, float b) {
    return a * b;
}