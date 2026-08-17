#include <iostream>
using namespace std;

int main() {

    for(int i = 0; i<5;i++)
    {
    char ch ='E' - i;
    for(int j =0 ; j<=i ; j++)
    {
        cout << ch;
        ch++;
    }
        cout << endl;
    }
    return 0;
}   

// E
// DE
// CDE
// BCDE
// ABCDE
