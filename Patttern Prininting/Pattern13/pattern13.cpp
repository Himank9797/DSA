#include <iostream>
using namespace std;

void upper(){
 
    for(int i=0;i<5;i++)
    {
        //stars
        for(int j =0 ; j < 5-i; j ++){
            cout << "*";
        }

        //spaces
        for(int j=0;j<2*i;j++){
            cout << " ";

        }

        //stars
        for(int j =0 ; j < 5-i; j ++){
            cout << "*";
        }
        cout << endl;
    }

}
void lower(){


    for(int i=0;i<5 ; i++){
        //stars
        for(int j=0 ; j <= i ; j++){
            cout << "*";
        }

        //spaces
        for(int j=0 ; j < 8-2*i ; j++){
            cout << " ";
        }

         for(int j=0 ; j <= i ; j++){
            cout << "*";
        }
        cout << endl;
    }



}
int main() {

    upper();
    lower();
    
    return 0;
}



// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********