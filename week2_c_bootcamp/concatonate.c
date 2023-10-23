#include <stdio.h>

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

char *concat_string(char str1[], char str2[], char result[]){
    int str1_len = string_length(str1);
    int str2_len = string_length(str2);
    

    for (int i = 0; i < str1_len; i++){
        result[i] = str1[i];
    }
    for (int i = 0; i < str2_len; i++){
        result[i + str1_len] = str2[i];
    }




    return result;

}


int main(){
    char result[100];
    concat_string("Noah", " Davis",result);
    printf("%s\n",result);
    return 0;
}

