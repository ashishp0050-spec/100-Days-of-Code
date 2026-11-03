#include <stdio.h>
#include <string.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    char s[20];
    if (scanf("%s", s) != 1) return 0;
    enum TrafficLight light;
    if (strcmp(s, "RED") == 0) light = RED;
    else if (strcmp(s, "YELLOW") == 0) light = YELLOW;
    else light = GREEN;
    switch (light) {
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN: printf("Go\n"); break;
    }
    return 0;
}
