#include <stdio.h>
#include <stdlib.h>

FILE *open_file(char filename[],char mode[]){
    FILE *file = fopen(filename,mode);
    if (file == NULL){
        perror("");
        exit(1);
    }
    return file;
}

int main() {
    char filename[] = "numbers.dat";
    char mode[] = "r";
    FILE *my_file = open_file(filename,mode);
    int buffer_size = 100;
    char line_buffer[buffer_size];
    float total = 0;
    int count = 0;
    while (fgets(line_buffer,buffer_size,my_file) != NULL){
        total += atof(line_buffer);
        count++;
    }
    float answer = total / count;
    fclose(my_file);
    my_file = open_file(filename,"a");
    char buf[buffer_size];
    gcvt(answer,8,buf);
    fprintf(my_file,"%s\n",buf);
    fclose(my_file);
    return 0;

}