#include<stdio.h>

int calcPercentage(int science, int math, int sanskrit);

int main() {
    int science, math, sanskrit;
    printf("Enter marks for Science: ");
    scanf("%d", &science);
    printf("Enter marks for Math: ");
    scanf("%d", &math);
    printf("Enter marks for Sanskrit: ");
    scanf("%d", &sanskrit);

    int percentage = calcPercentage(science, math, sanskrit);
    printf("The percentage is: %d%%\n", percentage);

    return 0;
}

int calcPercentage(int science, int math, int sanskrit) {
    return ((science + math + sanskrit) / 3);
}
