    #include <iostream>
    using namespace std;


    void matrix(int n){
            for(int i =0;i<n;i++){
            for(int j = 0 ; j<n ; j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down =  (2*n-2)-i;
            
            cout << (n-min(min(top, down) ,min(left,right)));

            };

            cout << endl;
        };
            

    }
    int main() {
        void(5);
        

        return 0;
    }