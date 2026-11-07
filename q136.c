#include <stdio.h>
#include <string.h>

enum Choice { ADD, SUBTRACT, MULTIPLY };

int main() {
    char op[20];
    int a, b;
    if (scanf("%s %d %d", op, &a, &b) != 3) return 0;
    enum Choice choice;
    if (strcmp(op, "ADD") == 0) choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0) choice = SUBTRACT;
    else choice = MULTIPLY;
    switch (choice) {
        case ADD: printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
    }
    return 0;
}
