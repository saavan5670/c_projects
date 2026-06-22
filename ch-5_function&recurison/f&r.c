//write 2 function one to print "hello" & second to print "good bye"
#include <stdio.h>

void printHello();
void printGoodbye();

int main() {
    printHello();
    printGoodbye();

    return 0;
}
void printHello() {
    printf("hello\n");
}
void printGoodbye() {
    printf("good bye\n");
}