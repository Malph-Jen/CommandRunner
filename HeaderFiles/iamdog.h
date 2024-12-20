/*These are the functions that will be called in the main scripts*/

/*This function is for the shutdown reboot and etc*/
int powerFunc(const char *command);

/*This function is for the programs opening and closing*/
int OpenorColseProg(const char *command, const char *fName);

/*This function is for search*/
int Search(const char *command, const char *fName, const char *searchword);

/*This function is for the volume*/
int vlmFunc(const char *command, const char *commandArg, const int volume);

/*This function is for the deletion*/
int delFiles(char *command, char *fPath);

/*This function is for the restoring deleted files*/
int resFiles(char *command, char *fName);

/*This function is for the date and time*/
int dtFunc(char *command, char *dateortime);