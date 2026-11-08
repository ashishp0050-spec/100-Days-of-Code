#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char s[20];
    if (scanf("%s", s) != 1) return 0;
    enum Role role;
    if (strcmp(s, "ADMIN") == 0) role = ADMIN;
    else if (strcmp(s, "USER") == 0) role = USER;
    else role = GUEST;
    switch (role) {
        case ADMIN: printf("Welcome Admin!\n"); break;
        case USER: printf("Welcome User!\n"); break;
        case GUEST: printf("Welcome Guest!\n"); break;
    }
    return 0;
}
