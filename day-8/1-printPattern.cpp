#include<iostream>
using namespace std;

// solve love bubber  pattern auestions

int main(){
        //    *
        //   **
        //  ***
        // ****
    int row = 1;
    while(row<=5){
        int space = 4;
        while(space>=row){
            cout<<" ";
            space--;
        }
        int col = 1;
        while(col<=row){
            cout<<"*";
            col++;
        }

        cout<<endl;
        row++;

    }
}