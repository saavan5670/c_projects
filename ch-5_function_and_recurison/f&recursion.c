//write 2 function one to print "hello" & second to print "good bye"
#include <stdio.h>

//function declaration
void printHello();
void printGoodbye();

int main() {
    printHello();  //function call
    printGoodbye();

    return 0;
}

//function definition
void printHello() {
    printf("hello\n");
}
void printGoodbye() {
    printf("good bye\n");
}