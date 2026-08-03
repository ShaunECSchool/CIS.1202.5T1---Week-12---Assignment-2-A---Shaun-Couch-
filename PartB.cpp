/*
Shaun Couch
CIS.1202.5T1
August/2/2026
*/

#include <iostream>
#include <string>

using namespace std;

//Function Prototypes-------------------------------------------

template <class T>
T half(const T & n);


//Main-------------------------------------------

int main()
{
    cout << half(5) << endl; //test1
    cout << half(5.0) << endl; //test2
    return 0;
}

//Function--------------------------------------------

template <class T> 
T half(const T & n)
{
    return n / 2;
}