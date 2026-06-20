#include <stdio.h>

int factorial(int num);
int sumofN(int num);

int main(){

    // int result = 1, fact = 5;

    // while(fact > 1){
    //     result = result * fact;
    //     fact = fact - 1;
    // }
    
    int result = factorial(5);
    printf("Result of 5! is: %d", result);

    int sum = sumofN(100);
    printf("Result of sum of first 100 number is: %d", sum);


    return 0;
}

int factorial(int num){
    if(num > 1) {
        return num * factorial(num -1);
    }
    return 1;
}

int sumofN(int num){
    if(num == 0){
        return 0;
    }
    return num + sumofN(num -1);
}
// factorial(5) = 5 * 24 = 120
// 5 * 24 =
// 5 * 4 * 6 = 
// 5 * 4 * 3 * 2 = 
// 5 * 4 * 3 * 2 * 1 = ^
// 5 * 4 * 3 * 2 * 1 = 

    