#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
          cout << j;
        }


        for(int j = 1 ; j<=8-2*i; j++){

                cout << " ";


        }

         for (int j = 1; j <= i; j++)
        {
          cout << i;
        }
        
        
        cout << endl;
    }
    
    return 0;
}


// 1      1
// 12    22
// 123  333
// 12344444
