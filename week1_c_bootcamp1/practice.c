#include <stdio.h>
int task1(){
    for (int a = 1; a < 21; a += 2){
        printf("%d\n",a);
    }
    return 0;
}

int task2(){
    for (int a = 20; a > -1; a-= 2){
        printf("%d\n",a);
    }
    return 0;
}

int task3(){
    for (int a = 1; a < 11; a++){
        printf("%d\n",a*a);
    }
    return 0;
}

int main(){
    task2();
    return 0;
}