#include <iostream>
using namespace std;

int main() {


    for(int i=0; i<=4;i++)
    {
       char ch= 'A'+i;
       for(int j =0 ; j <= i ; j++)
       {
        cout << ch ;
       }
        cout << endl;
    }
    return 0;
}


// A
// BB
// CCC
// DDDD
// EEEEE
