cmake_minimum_required(VERSION 3.10)
project(MyCProject)

set(CMAKE_C_STANDARD 99)

add_executable(program_easy 
    CallingFunctionsOfCmd/easy.c
    HeaderFuncDefinition/cmdFunc.c
    HeaderMultiFuncDefinition/file.c
    HeaderFileForMultiCmdFunc/file.h
    HeaderFiles/cmdFunc.h
)

add_executable(program_firstfile 
    CallingFunctionsOfCmd/firstfile.c
    HeaderFuncDefinition/cmdFunc.c
    HeaderMultiFuncDefinition/file.c
    HeaderFileForMultiCmdFunc/file.h
    HeaderFiles/cmdFunc.h
)
