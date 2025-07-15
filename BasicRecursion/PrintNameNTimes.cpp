#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void PrintNameNTimes(int i , int n){
        if(i > n){
            return;
        }
        cout << "Rohit" << endl;
        PrintNameNTimes(++i,n);
    }
};

vector<int> v(11)


int main(){
    Solution s;
    s.PrintNameNTimes(1,10);
}