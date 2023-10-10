#include<iostream>
using namespace std;
int main(){
    int n=10,prv =0 ,cur=1,next;
    for(int i= 0;i<n;i++){
        if(i<=1){
            next = i;
        }else{
            next = prv + cur;
            prv = cur;
            cur =next;
        }
        cout<<next<<" ";
    }
    cout<<endl;
    }
