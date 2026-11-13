// write a functions that prints namaste if the  user is indain & bonjour if the useer ts french
#include <stdio.h> 

void namaste(); // function declaration
void bonjour(); // function declaration

int main() {
    printf("Enter for  french  & i for indian :");
    char ch; 
    scanf("%c", &ch);
     
    if (ch == 'i') {
        namaste();
    }else if (ch == 'f') {
        bonjour();
    } else {
        printf("Invalid input\n");
    }

}
void namaste() {
printf("Namaste\n");
}
void bonjour() {
printf("Bonjour\n");
}