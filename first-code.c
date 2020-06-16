#include <stdio.h> //contains printf() function

int main() //The main executed code
{
    printf("Time to learn C from scratch!\n"); // The characters '\n' are used to tell the program
                                               // to go to the next line. Same as pressing Enter key
                                               // in a notepad. These characters are altogether called
                                               // newline character and is part of a series of special
                                                //characters known as escape sequences.

    return 0;                                   // It is used to tell that program ended normally.
                                                // 0 is an integer, and when we wrote int main(),
                                                // we meant that when the main code ends, the code
                                                // will give back an integer value (int is short for
                                                // integer). The integer returned for normal code execution
                                                // is 0, and for errors is some negative number.
}
