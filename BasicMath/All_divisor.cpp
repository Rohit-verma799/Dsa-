#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void printdivisorwithsqrt(int num){
        for(int i = 1; i<=sqrt(num); i++){
            if(num % i == 0){
                cout << i << endl;
                if((num/i) != i){
                    cout << num/i << endl;
                }
            }
        }
    }
    void printdivisor(int num){
        cout << 1 << endl;
        for(int i = 2; i<=num; i++){
            if(num % i == 0){
                cout << i << endl;
            }
        }
    }
};

int main(){
    Solution s;
    s.printdivisorwithsqrt(36);
}