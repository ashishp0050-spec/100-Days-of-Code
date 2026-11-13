#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];
    for (int i = 0; i < 5; i++) {
        if (scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks) != 3) {
            sprintf(s[i].name, "Student%d", i + 1);
            s[i].roll_no = 101 + i;
            s[i].marks = 80 + i * 2;
        }
    }
    printf("Roll\tName\tMarks\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t%s\t%d\n", s[i].roll_no, s[i].name, s[i].marks);
    }
    return 0;
}
