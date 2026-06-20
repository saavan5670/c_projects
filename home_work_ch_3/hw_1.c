// write a program to check if the given number is a natural number

#include<stdio.h>

int main() {
    int num;
    printf("enter number :");
    scanf("%d", &num);

if(num >= 0) {
    printf("natural number");
}
else {
    printf("not a natural number");
}
 
    return 0;
}