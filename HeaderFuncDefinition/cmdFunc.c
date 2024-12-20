#include <stdio.h>
#include "../HeaderFiles/cmdFunc.h"


int powerFunc(const char *command)
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


int OpenorColseProg(const char *command, const char *fName)
{
    char fullCommand[256];
    snprintf(fullCommand, sizeof(fullCommand), "%s %s", command, fName);
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

int vlmFunc(const char *command, const char *commandArg, const int volume)
{
    char fullCommand[256];
    snprintf(fullCommand, sizeof(fullCommand), "%s %s %d", command, commandArg, volume);
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

int Search(const char *command, const char *commandOption, const char *fName, const char *word)
{
    char fullCommand[256];
    snprintf(fullCommand, sizeof(fullCommand), "%s %s %s %s", command, fName, word, commandOption);
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

int searchOnline(const char *command, const char *whatTOSearch)
{
    char fullCommand[256];
    snprintf(fullCommand, sizeof(fullCommand), "%s %s", command, whatTOSearch);
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

int delFiles(const char *command, const char *fPath)
{
    char fullCommand[256];
    snprintf(fullCommand, sizeof(fullCommand), "%s %s", command, fPath);
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

