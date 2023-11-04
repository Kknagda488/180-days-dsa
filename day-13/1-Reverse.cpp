#include <iostream>
using namespace std;

int reverseNum(int x){
        int rem = 0,ans = 0;
        while(x!=0){
            if(ans <INT_MAX/10 && ans > INT_MIN/10 || ans == INT_MIN/10 && rem >= -8){
            rem = x%10;
            x = x/10;
            ans = ans*10 + rem;
        }
        }
        return ans;
}
int main(){
    cout<<reverseNum(123);
}