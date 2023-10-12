#include <stdio.h>

int main(){
    int a [10];
    int count;

    //populate my array
    for (count = 0; count < 10; count++){
        a[count] = count * 10 + count;
    }

    for (count = 0; count < 10; count ++){
        printf("%d\n",*(a + count));
    }
    //printf("First item is %d, second item is %d\n",a[0],a[1]);
    //printf("first %d, second %d\n",*a, *(a+1));
    return 0;
}