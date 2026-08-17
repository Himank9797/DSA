#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 4; i++)
    {
        char ch = 'A';

        // Left spaces
        for(int j = 0; j < 4 - i; j++)
        {
            cout << " ";
        }

        // Letters
        for(int j = 0; j < 2 * i - 1; j++)
        {
            cout << ch;

            if(j < i - 1)
                ch++;
            else
                ch--;
        }

        // Right spaces
        for(int j = 0; j < 4 - i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}

//    A   
//   ABA  
//  ABCBA 
// ABCDCBA