#include<iostream>

using namespace std;

int main(){

    // Q2. 1
    //     1 2
    //     1 2 3
    //     1 2 3 4

    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}