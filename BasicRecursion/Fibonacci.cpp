#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int fibonacci(int n){
        if(n<=1){
            return n;
        }
        return fibonacci(n-1)+fibonacci(n-2);
    }
};

int main(){
   Solution s;
   for(int i = 0; i<10; i++){
    cout<<s.fibonacci(i)<<endl;
   }
}