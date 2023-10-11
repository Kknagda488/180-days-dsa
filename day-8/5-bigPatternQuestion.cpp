#include<iostream>
using namespace std;

int main(){
    for(int i= 1;i<=5;i++){
        for(int j = 5;j>=i;j--){
            cout<<5-j+i<<" ";
        }
        for(int sp1 = 1;sp1<=i-1;sp1++){
            cout<<"* ";
        }
        for(int sp2 = 1;sp2<=i-1;sp2++){
            cout<<"* ";
        }
        for(int k=5;k>=i;k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}