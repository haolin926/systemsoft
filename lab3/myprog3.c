#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int myprog3(char argc, char *argv[])
{   
    // list process if no params are passed
    if (argc == 1) {
        system("ps -ef");
    } else if (argc == 3) {
        if (strcmp(argv[1], "search") == 0)
        {
            // search process if search param is passed
            execlp("pgrep", "pgrep", argv[2], NULL);
            perror("execlp failed");
            exit(EXIT_FAILURE);
        } else if (strcmp(argv[1], "kill") == 0)
        {
            // kill process if kill param is passed
            execlp("pkill", "pkill", argv[2], (char *)NULL);
            perror("execlp failed");
            exit(EXIT_FAILURE);
        }
    }
    return 0;
}