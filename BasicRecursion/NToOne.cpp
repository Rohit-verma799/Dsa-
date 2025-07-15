#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void NtoOne(int n){
        if(n == 0){
            return;
        }
        cout << n << endl;
        NtoOne(--n);
    }
};

int main(){
    Solution s;
    s.NtoOne(10);
}