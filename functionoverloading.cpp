#include <iostream>
using namespace std;
//you can have two functions with the same name but different argument types, the computer automatically pics the right one to fit the data type          
void printNumber(int x){
    cout << "i am printing an integer " << x << endl;
}

void printNumber(float x){
    cout << "now i am printing a float " << x << endl;
}

int main()
{
    int a = 54;
    float b = 32.4896;
    
    printNumber(a);
    printNumber(b);
    
    return 0;
}
