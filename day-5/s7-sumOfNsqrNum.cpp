#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    for(n=3;n>=1;n--){
        sum +=(n*n);
    }
    cout<<sum;
}