#include <stdio.h>

int main() {
    char myString[5] = "Hello";
    //printf("%s\n",myString);
    for (int i = 5; i < -1; i--){
        printf("%d\n",myString[i]);
    }
    return 0;
}