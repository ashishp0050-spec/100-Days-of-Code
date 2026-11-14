#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    if (scanf("%d", &n) != 1) n = 3;
    struct Student s[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }
    int best = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[best].marks) {
            best = i;
        }
    }
    printf("Topper: %s (Marks: %d)\n", s[best].name, s[best].marks);
    return 0;
}
