#include<iostream>
using namespace std;
int main(){
    int arr[7]={3,9,6,1,0,12,4};
    for(int i = 0;i<6;i++){
        int index = i;
        for(int j = i + 1;j<7;j++)
        {
            if(arr[j]>arr[index]){
                index  = j; 
            }
        }
            swap(arr[i],arr[index]);
    }
    for(int k = 0;k<7;k++){
        cout<<arr[k]<<" ";
            }
}