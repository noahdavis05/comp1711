#include <stdio.h>

int main(){
    int mark = 0;
    printf("Enter the users mark: ");
    scanf("%d",&mark);
    if (mark >=0 && mark <=100){
        if (mark == 0){
            printf("The mark of %d is zero \n",mark);
        }
        else if (mark < 40)
        {
            printf("The mark of %d is a fail \n",mark);
        }
        else{
            printf("The mark of %d ia a pass \n",mark);
        }
    }
    else{
        printf("The mark must be inbetween 0 and 100 \n");
    }
    return 0;
}