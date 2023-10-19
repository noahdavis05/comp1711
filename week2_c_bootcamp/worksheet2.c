#include <stdio.h>
#include <math.h>

float area_of_circ(float radius); // this line can be used to make the compiler know that this function exists when it is called in a function below the one it is written in.

int task1(){
    float area;
    area = area_of_circ(2.5);
    printf("%f\n",area);
    return 0;
}

float area_of_circ(float radius){
    float a;
    a = M_PI * radius * radius;
    return a;
}

float vol_of_sphere(float radius){
    float vol;
    vol = 4.0/3 * M_PI * pow(radius,3); //have to make the 4 a 4.0, otherwise integer division occurs. In order to get the pow function to work use -lm at the end of the compile command.
    return vol;
}

int task2(){
    float vol = vol_of_sphere(2.5);
    printf("%f\n",vol);
    return 0;
}

int string_length(char *my_string){
    int length = 0;
    int item_found = 0; 
    char temp;

    while (item_found == 0){
        //check current position in list
        temp = *(my_string + length);
        if (temp == '\0'){
            item_found = 1;
        } else {
            length++;
        }
    }
    return length;
}


int task3(){
    int length = string_length("My name is noah");
    printf("%d\n",length);
    return 0;
}

int is_prime(int num){
    int count = 2;
    int prime = 1;
    while (count < num){
        if (num % count == 0){
            prime = 0;
            count = num; //ends the loop as the number has been proven not a prime
        }
        count++;
    }

    return prime;
}

int task4(){
    int prime = is_prime(49);
    printf("%d\n",prime);
    return 0;
}


char* string_concat(const char *str1, const char *str2){
    int str1_len = string_length(str1);
    int str2_len = string_length(str2);

    char str3[str1_len+str2_len + 1];  //plus one so i have space for null terminator
    
    for (int i = 0; i < str1_len; i++){
        str3[i] = str1[i];
    }
    for (int i = 0; i < str2_len; i++){
        str3[i + str1_len] = str2[i];
    }

    str3[str1_len + str2_len] = '\0';

    return str3;
}

char* string(){

}


int task5(){

    char str3[] = string_concat("Hi","Noah");
    printf("%s\n",str3);
    return 0;
}


int main(){
    task5();

    return 0;
}