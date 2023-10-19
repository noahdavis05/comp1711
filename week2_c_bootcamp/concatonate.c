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

char concat_string(char *str1,char *str2){
    int str1_len = string_length(str1);
    int str2_len = string_length(str2);

    char str3[str1_len + str2_len + 1];

    for (int i = 0; i < str1_len; i++){
        str3[i] = str1[i];
    }

    for (int i = 0; i < str2_len; i++){
        str3[i + str1_len] = str2[i];
    }

    str3[str1_len + str2_len] = '\0';

    return str3;

}






/*int main(){
    char str1[] = "Noah";
    char str2[] = " Davis";
    int str1_len = string_length(str1);
    int str2_len = string_length(str2);

    char str3[str1_len + str2_len + 1];

    for (int i = 0; i < str1_len; i++){
        str3[i] = str1[i];
    }

    for (int i = 0; i < str2_len; i++){
        str3[i + str1_len] = str2[i];
    }

    str3[str1_len + str2_len] = '\0';

    printf("%s\n",str3);

    return 0;
}*/

int main(){
    char *str3 = concat_string("Noah", " Davis");
    printf("%s\n",str3);
    return 0;
}