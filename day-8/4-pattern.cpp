#include<iostream>
using namespace std;

int main(){

    for(char i = 'A';i<='D';i++){
        for(char j = 'A';j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}