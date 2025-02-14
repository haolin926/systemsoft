#include <stdio.h>

int main(char argc, char *argv[]) {
    char command[50] = argv[1];

    system(command);
    return 0;
}