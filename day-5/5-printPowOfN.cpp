#include<iostream>
using namespace std;

int main(){
    int n = 4,pow=3,i,result = 1;
    for(i=1;i<=pow;i++){
        result*=n;
    }
    cout<<result;
}