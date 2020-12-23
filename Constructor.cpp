//program to demonstrate the concept of aloocate dynamic memory for constructor

#include <iostream>
using namespace std; 

class stud {
public:
    stud()
    {
        cout << "Constructor Used" << endl;
    }
    ~stud()
    {
        cout << "Destructor Used" << endl;
    }
};

int main()
{
    stud* S = new stud[6];
    delete[] S;
}

/*output
Constructor Used
Constructor Used
Constructor Used
Constructor Used
Constructor Used
Constructor Used
Destructor Used
Destructor Used
Destructor Used
Destructor Used
Destructor Used
Destructor Used
*/