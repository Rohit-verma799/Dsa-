#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    bool amstrong(int a){
        int original = a;
        int sum = 0;
        while(a > 0){
            int digit = a % 10;
            sum += (digit*digit*digit);
            a = a/10;
        }
        if(sum == original){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Solution s;
    cout << s.amstrong(153);
}