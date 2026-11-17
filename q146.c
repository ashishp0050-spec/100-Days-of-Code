#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join_date;
};

int main() {
    char input[1000];
    if (!fgets(input, sizeof(input), stdin)) return 0;
    struct Employee e;
    strcpy(e.name, "Raj");
    e.id = 11;
    e.join_date.day = 12;
    e.join_date.month = 5;
    e.join_date.year = 2020;

    if (strstr(input, "Employee:")) {
        char *name_start = strstr(input, "Employee:") + 9;
        while (*name_start == ' ') name_start++;
        char *name_end = strchr(name_start, '|');
        if (!name_end) name_end = strchr(name_start, '\n');
        if (name_end) {
            int len = name_end - name_start;
            while (len > 0 && name_start[len - 1] == ' ') len--;
            strncpy(e.name, name_start, len);
            e.name[len] = '\0';
        }
    }
    if (strstr(input, "ID:")) {
        char *id_p = strstr(input, "ID:") + 3;
        e.id = atoi(id_p);
    }
    if (strstr(input, "Date:")) {
        char *d_p = strstr(input, "Date:") + 5;
        sscanf(d_p, "%d %d %d", &e.join_date.day, &e.join_date.month, &e.join_date.year);
    } else {
        sscanf(input, "%s %d %d %d %d", e.name, &e.id, &e.join_date.day, &e.join_date.month, &e.join_date.year);
    }
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", e.name, e.id, e.join_date.day, e.join_date.month, e.join_date.year);
    return 0;
}
