#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int myprog4(char argc, char *argv[])
{
    pid_t pid = fork();

    if (pid == 0)
    {
        // Child process
        FILE *fp = NULL;
        fp = fopen("logfile.txt", "w+");
        fprintf(fp, "child process logging");
        fclose(fp);
        exit(EXIT_FAILURE);
    }
    else
    {
        // Parent process
        int status;
        pid_t child_pid = waitpid(pid,&status, 0);

        if(child_pid == -1)
        {
            perror("waitpid failed");
            printf("child process exited with status %d\n", status);
            exit(EXIT_FAILURE);
        }
        else {
            printf("child process extied\n");
        }
    }
}