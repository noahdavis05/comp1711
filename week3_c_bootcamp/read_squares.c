#include <stdio.h>
#include <stdlib.h>

FILE *open_file(char filename[], char mode[]) {
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("");
        exit(1);
    }
    return file;
}

int main(){
    char filename[] = "squares.dat";
    FILE *file = open_file(filename,"r");
    //read each line
    int buffer_size = 100;
    float total = 0;
    float count = 0;
    char line_buffer[buffer_size];
    while (fgets(line_buffer,buffer_size,file) != NULL) {
        total += atoi(line_buffer);
        count += 1;
    }
    printf("%f",total/count);
    return 0;
}