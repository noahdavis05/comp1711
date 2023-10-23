#include <stdio.h>

int main() {
    int n;
    printf("What number do yo9u want to write squares up to:  ");
    scanf("%d",&n);
    char filename[] = "squares.dat";
    FILE *file = fopen(filename,"w");
    for (int i = 1; i <= n; i ++){
        fprintf(file,"%d", i*i);
        fprintf(file,"\n");
    }
    return 0;
}