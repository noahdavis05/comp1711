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

int task3(){
    int grade;
    printf("What grade did you get: ");
    scanf("%d",&grade);
    printf("\n");
    if (grade >= 0 && grade <= 100){
        if (grade < 50){
            printf("That is a fail\n");
        }
        else if (grade < 70){
            printf("That is a pass\n");
        }
        else {
            printf("That is a distinction\n");
        }
    } 
    else {
        printf("Grade not between allowed limits\n");
    }
    return 0;
}

int task4(){
    int temperature;
    printf("What is the temperature: ");
    scanf("%d",&temperature);
    if (temperature >= -10 && temperature <= 40){
        printf("Temperature is within the valid range\n");
    } else {
        printf("Temperature is not within the valid range\n");
    }
    return 0;
}

int task5(){
    int choice;
    printf("Choose numbers 1,2,3,4,5");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:printf("menu choice 1 selected");
        break;

    case 2:printf("menu choice 2 selected");
        break;

    case 3:printf("menu choice 3 selected");
        break;

    case 4:printf("menu choice 4 selected");
        break;

    case 5:printf("menu choice 5 selected");
        break;
    
    default: printf("Invalid input must be  anumber between 1 and 5");
        break;
    }
    return 0;
}

int task6(){
    int num = 0;
    while (num != -1){
        printf("Enter a number between 1 and 100: ");
        scanf("%d",&num);
        if (num >= 0 && num <= 100){
            printf("number is in range\n");
        } else {
            printf("number not in range\n");
        }
        
    }
    return 0;
}

int main(){
    task6();
    return 0;
}