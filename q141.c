#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    if (scanf("%*[^:]: %s", s.name) != 1) scanf("%s", s.name);
    if (scanf("%*[^:]: %d", &s.roll_no) != 1) scanf("%d", &s.roll_no);
    if (scanf("%*[^:]: %d", &s.marks) != 1) scanf("%d", &s.marks);
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    return 0;
}
