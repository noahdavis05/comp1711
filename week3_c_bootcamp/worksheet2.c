#include <stdio.h>

typedef struct {
    double x;
    double y;
} point;

int main () {
    int num = 4;
    point points[num];
    for (int i = 0; i < num; i++){
        printf("Enter number for x:  ");
        scanf("%lf",&points[i].x);
        printf("Enter number for y:  ");
        scanf("%lf",&points[i].y);
    }

    for (int i = 0; i < num; i++){
        printf("%lf\n",points[i].x);
        printf("%lf\n",points[i].y);
    }
    return 0;
}