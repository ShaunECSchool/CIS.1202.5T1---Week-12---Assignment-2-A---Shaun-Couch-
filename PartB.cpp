/*
Shaun Couch
CIS.1202.5T1
August/2/2026
*/

#include <iostream>
#include <string>

using namespace std;

//Instructions-------------------------------------------

/*
Write templated functions to perform math on varying numeric data types.
Use a source code management tool as you develop this program.  Commit changes frequently using descriptive commit messages.  Push your changes to GitHub or other publicly accessible location for your instructor to clone.
Requirements
    1. Read the tips in the next section.
    2. Define functions named "half" that accept a single argument, and return a value of that same type.
    3. For floating-point types (float, double), return half of the value passed in as argument.
    4. For integer types (int), return half the value, rounded according to usual rounding rules (0.5 or higher, round up; otherwise round down.)
    5. Build a driver in main to test these functions and display their output.
    6. Functions must pass parameters and return values as needed, using only local variables.  Global variables are not allowed.
    7. Use comments to document your program as you see fit.  Include comments at the beginning of your program with your name, the class (with section), and the date.
    8. Submit the URL for your repository to the dropbox.  No screen shots are needed.
*/


//Function Prototypes-------------------------------------------

template <class T> //Modular data type handler
void output(const T & n);
template <class T> 
void swapper(T & a, T & b);


//Main-------------------------------------------

int main()
{
    output (5);
    output (19284.3232);
    output ("Hello, world!");
    return 0;
}

//Functions-------------------------------------------
    
template <class T>
void output(const T & n)
{
    cout << n << endl;
}

template <class T> 
void swapper(T & a, T & b)
{
    T temp = a;
    a = b;
    b = temp;
}