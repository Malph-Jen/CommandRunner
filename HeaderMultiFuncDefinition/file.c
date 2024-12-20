#include <stdio.h>
#include "../HeaderFileForMultiCmdFunc/file.h"

int func1(const char *command)
{
    char buffer[128];
    FILE *fProc = popen(command, "r");

    if(fProc == NULL)
    {
        printf("Error opening file\n");
    }

    while (fgets(buffer, sizeof(buffer), fProc) != NULL)
    {
        printf("%s\n", buffer);
    }

    if(pclose(fProc) == 1)
    {
        perror("Error closing pipe\n");
        
        return 1;
    }
}

int func2(const char *command, const char *cmdFlag)
{
      char fullCommand[256];
    snprintf(fullCommand, sizeof(fullCommand), "%s %s", command, cmdFlag);
    FILE *fProc = popen(fullCommand, "r");
    if (fProc == NULL)
    {
        perror("Error opening pipe\n");
        return 1;
    }

    char buffer[128];
    while (fgets(buffer, sizeof(buffer), fProc) != NULL)
    {
        printf("%s ", buffer);
    }
    
    if(pclose(fProc) == -1)
    {
        printf("Error closing pipe");
        return 1;
    }
}

int func3(const char *command, const char *cmdFlag, const char *fName)
{
    char fullCommand[256];
    snprintf(fullCommand, sizeof(fullCommand), "%s %s %s", command, cmdFlag, fName);
    FILE *fProc = popen(fullCommand, "r");
    if (fProc == NULL)
    {
        perror("Error opening pipe\n");
        return 1;
    }

    char buffer[128];
    while (fgets(buffer, sizeof(buffer), fProc) != NULL)
    {
        printf("%s ", buffer);
    }
    
    if(pclose(fProc) == -1)
    {
        printf("Error closing pipe");
        return 1;
    }
}

int func4(const char *command, const char *cmdFlag, const char *word, const char *fName)
{
    char fullCommand[256];
    snprintf(fullCommand, sizeof(fullCommand), "%s %s %s %s", command, cmdFlag, word, fName);
    FILE *fProc = popen(fullCommand, "r");
    if (fProc == NULL)
    {
        perror("Error opening pipe\n");
        return 1;
    }

    char buffer[128];
    while (fgets(buffer, sizeof(buffer), fProc) != NULL)
    {
        printf("%s ", buffer);
    }
    
    if(pclose(fProc) == -1)
    {
        printf("Error closing pipe");
        return 1;
    }
}