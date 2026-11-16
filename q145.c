#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student getTopStudent(struct Student arr[], int n) {
    int best = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].marks > arr[best].marks) {
            best = i;
        }
    }
    return arr[best];
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) n = 3;
    struct Student s[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }
    struct Student top = getTopStudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);
    return 0;
}
