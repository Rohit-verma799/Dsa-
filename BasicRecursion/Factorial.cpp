#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int Iterative(int n){
        int fact = 1;
        for(int i = 1; i<=n; i++){
            fact *= i;
        }

        return fact;
    }

    int Recursive(int n){
        if(n == 0 || n == 1){
            return 1;
        }
        return n*Recursive(n-1);
    }
};

int main(){
    Solution s;
    cout << s.Iterative(5) << endl;
    cout << s.Recursive(5) << endl;
}