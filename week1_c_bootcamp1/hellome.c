#include <stdio.h>
int main(){
    char name[15]; //this makes a string that can have up to 15 characters

    printf("Hello, please enter your name: ");
    scanf("%s", name);
    printf("Your name is %s\n", name);

    return 0;
}