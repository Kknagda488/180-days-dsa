#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3,45,45,5,5,2,4,4,4,4,4,32,21,1,3,323};
    
    for(int i = 0; i<=15; i++){
        int index = i;
        for(int j = i + 1; j<16;j++){
            if(arr[j]<arr[index]){
                index = j;
            }
            swap(arr[i],arr[index]);
        }
    }
        for(int k = 0; k<16; k++){
            cout<<arr[k]<<" ";
        }
}