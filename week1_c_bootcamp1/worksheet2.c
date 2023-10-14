#include <stdio.h>

int task1(){
    int total = 0;
    int my_nums[5] = {4,56,1,23,14};

    for (int count = 0; count < 5; count++){
        total += my_nums[count];
    }
    printf("Total is %d \n",total);
    return 0;
}

int task2(){
    int my_nums[5] = {1,2,3,4,5};
    int my_numbers[5];

    for (int count = 0; count < 5; count++){
        my_numbers[4 - count] = my_nums[count];
    }

    for (int count = 0; count < 5; count ++){
        printf("%d\n",my_numbers[count]);
    }
    return 0;
}

int task3(){
    int my_nums[5] = {1,2,3,4,5};
    int max_num = 0;
    for (int count = 0; count < 5; count++){
        if (my_nums[count] > max_num){
            max_num = my_nums[count];
        }
    }
    printf("The biggest number is %d \n",max_num);
    return 0;
}

int task4(){
    int my_nums[5] = {1,2,3,4,5};
    int temp = my_nums[0];
    

    for (int count = 0; count <4; count++){
        my_nums[count] = my_nums[count + 1];        
    }

    my_nums[4] = temp;
    
    for (int count = 0; count < 5; count ++){
        printf("%d\n",my_nums[count]);
    }
    return 0;
}

int task5(){
    int my_nums[6] = {12,45,23,12,45,23};
    int duplicates[6];
    int pointer = 0;
    for (int count = 0; count <6; count++){
        for (int i = 0; i <6; i++){
            if (i != count){
                if (my_nums[count] == my_nums[i]){
                    duplicates[pointer] = my_nums[count];
                    pointer++;
                }
            }
        }
    }
    for (int count = 0; count < 6; count++){
        printf("%d\n",duplicates[count]);
    }
    return 0;
}

int task6(){
    int arr1[3] = {1,2,3};
    int arr2[3] = {4,5,6};
    int arr3[6];
    for (int i = 0; i < 3; i++){
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < 3; i++){
        arr3[i + 3] = arr2[i];
    }
    for (int i = 0; i <6; i++){
        printf("%d\n",arr3[i]);
    }
    return 0;
}

int main (){
    task6();

    return 0;
}