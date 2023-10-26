#include <stdio.h>

typedef struct {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    unsigned mark;
} student;

int main(){
    int num= 10, i;
    student students[] = {
        {"Alice Smith",    "64827593", 67},
        {"Bob Johnson",    "19374650", 89},
        {"Charlie Brown",  "82056914", 76},
        {"David Davis",    "45790182", 44},
        {"Eve Wilson",     "36102478", 91},
        {"Frank Anderson", "93571826", 53},
        {"Grace Lee",      "50249867", 78},
        {"Hannah Clark",   "74820591", 62},
        {"Isaac Harris",   "61093745", 89},
        {"Jack White",     "92847501", 72},
    };
    for (i = 0; i < num; i++){
        printf("%s\n",students[i].name);
        printf("%s\n",students[i].student_id);
        printf("%u\n",students[i].mark);
    }
    return 0;
}