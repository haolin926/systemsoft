#include <stdio.h>
#include <stdlib.h>

int myprog1(char argc, char *argv[]) {
    char command[50];
    // snprintf to copy & concat command line arguments ls and -l
    snprintf(command, sizeof(command), "%s %s", argv[1], argv[2]);

    system(command);
    return 0;
}