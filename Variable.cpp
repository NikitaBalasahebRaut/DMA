//program to  demonstrate the concept of dynamic memory allocation 
//memory allocate for the variable

#include <iostream>
using namespace std;

int main() 
{
    // declare an int pointer
    int* pointInt;

    // declare a float pointer
    float* pointFloat;

    // dynamically allocate memory
    pointInt = new int;
    pointFloat = new float;

    // assigning value to the memory
    *pointInt = 45;
    *pointFloat = 45.45f;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    // deallocate the memory
    delete pointInt, pointFloat;

    return 0;
}

/*
output 
45
45.45
*/