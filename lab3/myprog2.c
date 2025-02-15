#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int myprog2(char argc, char *argv[]) {
    char command[50];
    // snprintf to copy & concat command line arguments ls and -l
    snprintf(command, sizeof(command), "%s %s", argv[1], argv[2]);

    pid_t pid = fork();
    if (pid == 0) {
        // Child process
        printf("In the child process, replace the current process with the command ls -l\n");
        // execute ls -l
        execlp(argv[1], argv[1], argv[2], NULL);
    } else {
        // Parent process
        printf("In the parent process\n");
    }
    return 0;
}