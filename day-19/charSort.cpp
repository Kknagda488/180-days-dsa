#include<iostream>
using namespace std;

int main()
{
    char str[4] = {'a','d','g','l'};

    for(int i = 0; i<3;i++){
        int index = i;
        for(int j = i +1; j<4;j++){
            if(str[j]<str[index]){
                index = j;

            }
            swap(str[i],str[index]);
        }
    }
    for(int k = 0; k<4;k++){
        cout<<str[k]<<" ";
    }

}