// print the number from 0 to n if n is given by the user. (n=4) {while loop's question}
#include <stdio.h>

int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}