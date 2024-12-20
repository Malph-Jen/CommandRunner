#include <stdio.h>
#include "../HeaderFileForMultiCmdFunc/file.h"

int main(int argc, char const *argv[])
{
    func1(argv[1]);
    func2(argv[1], argv[2]);
    func3(argv[1], argv[2], argv[3]);
    func4(argv[1], argv[2], argv[3], argv[4]);
    return 0;
}
