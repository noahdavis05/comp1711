#include <stdio.h>

struct student {
    char name[20];
    char student_id[11];
    unsigned mark;
};

int main(){
    struct student new_student = {"Noah Davis","1234567890",35};
    printf("%s\n",new_student.name);
    printf("%s\n",new_student.student_id);
    printf("%u\n",new_student.mark);
    return 0 ;
}
