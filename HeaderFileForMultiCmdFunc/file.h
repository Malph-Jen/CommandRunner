/*This header is for the functions that on which functions you can call a lot of commands*/

/*The below function is or that commands that only is a command like poweroff or reboot*/
int func1(const char *command);

/*The below function is for that commands that take two arguments like cd*/
int func2(const char *command, const char *cmdFlag);

/*The below function is for that commands that take three arguments like ls*/
int func3(const char *command, const char *cmdFlag, const char *fName);

/*The below function is for that commands that take four commands like grep*/
int func4(const char *command, const char *cmdFlag, const char *word, const char *fName);