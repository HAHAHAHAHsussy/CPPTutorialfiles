
#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    int age = 0;
    int prefage = 7;
    char fed;
    cout << "how old are you" << endl; 
    cin >> age;
    cout << "are you a federal agent(y/n)" << endl; 
    cin >> fed; 
    if (age <= prefage and fed == 'n'){
    cout << "get in my vehicle" << endl;
    }
    else if(age > 7){
        cout << "thats too old for me, but i will make it work" << endl; 
    }
    else{
        cout << "please dont arrest me";
        exit;
    }
    usleep(1000000);
    cout << "alr we are driving to my house get in" << endl;
    return 0;
}
