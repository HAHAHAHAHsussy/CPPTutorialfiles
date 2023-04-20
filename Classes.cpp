
#include <iostream>
#include <string>
using namespace std;
//initializes class 
class BuckysClass{
    //public means that things outside the class can change
    public:
        BuckysClass(){
            cout << "this will get printed" << endl; 
            
        }
        //uses a function to set the name, and a function to get the value 
        void setName(string x){
            name = x;
        }
        string getName(){
            return name; 
        }
    private:
        string name;
};
    
int main()
{
    //makes an object for the class 
    BuckysClass bo;
    //uses a dot operator to sepparate object from the function its calling 
    bo.setName("dale");
    cout << bo.getName();
    return 0;
}
