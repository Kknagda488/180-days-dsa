

#include<iostream>

using namespace std;

int main(){
    //  Q4. 1 4 9 16 25
    //      1 4 9 16 25
    //      1 4 9 16 25
    //      1 4 9 16 25

    int i,j;

    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cout<<j*j<<" ";
        }
        cout<<endl;
    }
}