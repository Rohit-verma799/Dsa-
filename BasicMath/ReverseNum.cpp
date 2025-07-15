#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int reverseNum(int n){
        int result = 0;
        while(n > 0){
            int digit = n % 10;
            result = result*10 + digit;
            n = n / 10;
        }
        return result;
    }
};    

    int main(){
        Solution s;
        cout << s.reverseNum(13400);
    }

