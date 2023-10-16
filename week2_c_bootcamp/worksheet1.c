#include <stdio.h>

int task1(){
    int number = 10;
    if (number == 0){
        printf("Number is zero");
    }
    else if(number > 0){
        printf("NUmber is greater than zero");
    }
    else{
        printf("NUmber is less than zero");
    }
    return 0;
}

int task2() {
    int number = 21;
    if (number % 5 == 0){
        if (number % 4 == 0){
            printf("This number is divisible by 4 and 5");
        }
        else{
            printf("This number is not divisible by both four and 5");
        }
    } else {
        printf("This number is not divisible by both four and 5");
    }
    return 0;
}





int main(){
    task2();
    return 0;
}