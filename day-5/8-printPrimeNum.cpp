#include<iostream>

using namespace std;

int main(){
    int n= 13,isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime){
        cout<<n <<"is Prime number";
    }else{
        cout<<n<<" is not prime number";
    }
} 