#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int SumofN(int n){
        if(n == 0){
            return 0;
        }
        return n + SumofN(n-1);
    }
};

int main(){
    Solution s;
    cout << s.SumofN(5000);
}