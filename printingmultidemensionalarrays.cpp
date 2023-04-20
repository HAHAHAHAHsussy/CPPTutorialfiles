#include <iostream>

using namespace std;

int main()
{
    //multi demensional array is just an array with rows and collumbs 
    //the first [] is how many in rows, the second [] is how many in collumbs 
    //the first {} is the row values, the second {} is collumbs 
    int bertha[2][3] = {{1,2,3},{7,8,9}};
    for(int row=0;row<2;row++){
        for(int collumn=0;collumn<3;collumn++){
            cout << bertha[row][collumn] << " ";
        }
        cout << endl;
    }
    //the way you print an array is "varname"[row][collumb]
    return 0;
}
