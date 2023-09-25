#include<iostream>

using namespace std;

int main(){
// Q    a b c d e
//      a b c d e
//      a b c d e
//      a b c d e


    for(int i= 0;i<=4;i++){
        char str = 'a' + i;
        for(int j=0;j<=4;j++){
            cout<<str<<" ";
        }
        cout<<endl;
    }
}