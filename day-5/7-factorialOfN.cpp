#include<iostream>
using namespace std;

int main(){
    int n,fcat = 1;
    for(n=0;n>=1;n--){
        fcat = fcat* n;
    }
    cout<<fcat;
}