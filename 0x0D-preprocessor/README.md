0x0D. C - Preprocessor

An object-like macro is a simple identifier which will be replaced by a code fragment. It is called object-like because it looks like a data object in code that uses it. They are most commonly used to give symbolic names to numeric constants.

You create macros with the ‘#define’ directive. ‘#define’ is followed by the name of the macro and then the token sequence it should be an abbreviation for, which is variously referred to as the macro's body, expansion or replacement list. For example,

     #define BUFFER_SIZE 1024
defines a macro named BUFFER_SIZE as an abbreviation for the token 1024. If somewhere after this ‘#define’ directive there comes a C statement of the form

     foo = (char *) malloc (BUFFER_SIZE);
0. Object-like Macro
mandatory
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

 Pi
mandatory
Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

File name
mandatory
Write a program that prints the name of the file it was compiled from, followed by a new line.

You are allowed to use the standard library
