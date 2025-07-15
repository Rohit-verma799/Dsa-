#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int i = 1;
    void OneToN(int n){
     if(n == 0){
        return;
     }
      cout << i++ << endl;
      OneToN(--n);
    }
};

int main(){
    Solution s;
    s.OneToN(10);
}