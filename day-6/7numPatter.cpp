#include<iostream>
using namespace std;

int main(){
    // Q. 1 2 3 4 5
    //    6 7 8 9 10
    //    11 12 13 14 15
    //    1

    int i,j,count= 1;

    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cout<<count<<"  ";
            count++;
        }
        cout<<endl;
    }

}