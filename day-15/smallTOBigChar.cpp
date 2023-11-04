#include <iostream>
using namespace std;

char convert(char name){
    return name - 'a' + 'A';
}
int main(){
    char name;
    cout<<"Enter small charater :--"<<endl;
    cin>>name;
    cout<<convert(name);
}