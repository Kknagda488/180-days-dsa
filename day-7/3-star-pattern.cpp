#include<iostream>
using namespace std;

int main(){
    // Q3. 1
    //     2 1
    //     3 2 1
    //     4 3 2 1
    //     5 4 3 2 1

    int i,j,v=1;
    for(i=1;i<=4;i++){
        for(j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}