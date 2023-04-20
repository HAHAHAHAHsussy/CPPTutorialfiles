#include <iostream>
using namespace std;
//prototyping 
void passbyvalue(int x);
void passbyreference(int *x);
int main()
{
    int betty = 13;
    int sandy = 13;
    
    passbyvalue(betty);
    //the & marks that it is a memory address 
    passbyreference(&sandy);
    
    cout << "betty is now " << betty << endl;
    cout << "sandy is now " << sandy << endl;
    return 0;
}

//this function doesnt have direct access to changing what is put in, it makes a copy of it
void passbyvalue(int x){
    x = 99;
}
//the * symbolizes a variable that holds a memory adress
//changes what is put in to 66 because it has direct access 
void passbyreference(int *x){
    *x =66;
}
