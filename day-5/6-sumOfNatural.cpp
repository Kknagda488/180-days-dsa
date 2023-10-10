#include<iostream>
using namespace std;
int main(){
    int n,sum = 0;
    for(n=1000;n>=1;n--){
        sum += n;
    }
    cout<<sum;
}