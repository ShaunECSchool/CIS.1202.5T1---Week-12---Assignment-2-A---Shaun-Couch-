/*
Shaun Couch
CIS.1202.5T1
August/2/2026
*/

#include <iostream>
#include <string>

using namespace std;

//Class Definitions-------------------------------------------

class invalidCharacterException : public exception 
{
private:
    string message;
public:
    invalidCharacterException(string msg) : message(msg) {}
    
    const char* what() const noexcept override {
        return message.c_str();
    }
};

class invalidRangeException : public exception 
{
private:
    string message;
public:
    invalidRangeException(string msg) : message(msg) {}
    
    const char* what() const noexcept override {
        return message.c_str();
    }
};

//Function Prototypes-------------------------------------------

char character(char, int);

//Main-------------------------------------------

int main()
{
    char testChar;
    int testOffset;


    //test1
    testChar = 'a';
    testOffset = 1;
    
    try
    {
        cout << "character('" << testChar << "', " << testOffset << ") = " << character(testChar, testOffset) << endl;
    }   
    catch (const exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }
    catch (const exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }
    
    //test2
    testChar = 'a';
    testOffset = -1;

    try
    {
        cout << "character('" << testChar << "', " << testOffset << ") = " << character(testChar, testOffset) << endl;
    }
    catch (const exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }
    catch (const exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    //test3
    testChar = 'Z';
    testOffset = -1;
    try
    {
        cout << "character('" << testChar << "', " << testOffset << ") = " << character(testChar, testOffset) << endl;
    }
    catch (const exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    //test4
    testChar = 'A';
    testOffset = 32;
    try
    {
        cout << "character('" << testChar << "', " << testOffset << ") = " << character(testChar, testOffset) << endl;
    }
    catch (const invalidCharacterException& e)
    {
        cout << "Error: " << e.what() << endl;
    }
    catch (const invalidRangeException& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

//Functions-------------------------------------------

char character(char start, int offset)
{
    if (!isalpha(start))
    {
        throw invalidCharacterException("Character is not a letter.");
    }
    if (!isalpha(start + offset))
    {
        throw invalidRangeException("Target character is not a letter.");
    }
    if ((isupper(start) && islower(start + offset)) || (islower(start) && isupper(start + offset)))
    {
        throw invalidRangeException("Upper-case and lower-case transitions are not allowed.");
    }
    return (start + offset);
}