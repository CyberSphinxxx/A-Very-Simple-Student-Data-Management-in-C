#include <stdio.h>

struct StudentData {
    int studentNumber;
    char name[50];
    int grade;
};
void separator(){
     printf("\t\t==============================\n");
}
int main() {
    struct StudentData students[10];

    int i;
    for (i = 0; i < 10; ++i) {
    separator();
    printf("\t\tStudent %d Details\n", i + 1);
    students[i].studentNumber = i + 1;

    separator();
    printf("\t\tEnter Student Name: ");
    scanf("%s", students[i].name);

    printf("\t\tEnter Student Grade: ");
    scanf("%d", &students[i].grade);
    }

    separator();
    printf("\t\tPrinting all students:\n");
    
    for (i = 0; i < 10; ++i) {
        separator();
        printf("\t\tStudent\t%d\n\t\tName:\t%s\n\t\tGrade:\t%d\n",
        students[i].studentNumber, students[i].name, students[i].grade);
    }
    separator();
	
    return 0;
}

