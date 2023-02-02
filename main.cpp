// All C++ files end with .cpp

// These are called preprocessor directives: They load the files which contain pre-made functions for your use

// "cstdlib" Contains functions for converting one data type to another, random number generation, memory management, searching, math, sorting and other general purpose functions
#include <cstdlib>

// Provides functions for performing input and output operations
#include <iostream>

// If used you can type cout instead of std::cout for printing data to the console
// By using this though you may have conflicts if you define functions that share a name with the std (standard) namespace
using namespace std;

// Execution of code starts in the main() function
// argc and argv is optional data that could be passed to the program if it was executed in a terminal with arguments passed to the program
// argc : Number of arguments passed
// argv : Array pointers to strings
int main(int argc, char *argv[])
{
    // Outputs the string Hello World to the screen followed by a newline(a keyword that tells the compiler to print the following text on the next line)
    // cout is your console or screen
    // << operator is called Stream insertion operator which puts the string into the cout stream to display it in the console
    cout << "Hello World" << endl;

    // If no arguments are passed argc has a value of 1
    // We check that with if to skip printing values if none were passed
    if (argc != 1)
    {

        // You can also create a newline with \n
        cout << "You entered " << argc << " arguments\n";

        // Cycles through all the values in the argc array and prints them
        // We access the values by using their index number which generally starts with 0.
        for (int i = 0; i < argc; ++i)
        {

            // We access each string passed by putting its index between [] called the subscript operator
            cout << argv[i] << endl;
        }
    }

    // When 0 is returned that signals that the program executed without an error and if -1 signal is returned it means an error occurred
    return 0;
}
