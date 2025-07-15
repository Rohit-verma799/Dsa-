#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool check_prime(int num){
        if(num < 2){
            return false;
        }
        for(int i = 2; i<=sqrt(num); i++){
            if(num % 2 == 0){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution s;
   cout <<  s.check_prime(8);
}


// class Solution {
// public:
//     int GCD(int n1,int n2) {
//        while(n1 > 0 && n2 > 0){
//          if(n1 > n2){
//            n1 =  n1 % n2;
//          }else{
//             n2 = n2 % n1;
//          }
//        }

//        if(n1 == 0) return n2;
//        if(n2 == 0) return n1;
//     }
// };