#include<iostream>
using namespace std;
int main(){
// Q1. 5 4 3 2 1
//     5 4 3 2 1
    // 5 4 3 2 1
   //  5 4 3 2 1
   //   5 4 3 2 1


    int i,j;
    for(i=1;i<=5;i++){
        for(j=5;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}