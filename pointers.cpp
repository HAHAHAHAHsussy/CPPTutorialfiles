#include <iostream>
using namespace std;

int main()
{
    int fish = 5;
    //& changes the variable fish to its memory address 
    cout << &fish << endl;
    //* symbolizes that the variable is holding a memory address 
    int *fishPointer;
    fishPointer = &fish;
    
    cout << fishPointer << endl; 
    return 0;
}
