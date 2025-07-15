#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int rotate(vector<int> &v, int n){
       int f = 0;
       int l = v.size()-1;
       while(f<=l){
        int mid = (f+l)/2;
        if(v[mid] == n){
            return mid;
        }    
        else{
            if(v[f] <= n && n <= v[mid]){
                l = mid-1;
            }else{
                f = mid+1;
            }
        }

       }
       return -1;
    }

};

int main(){
    Solution s;
    vector<int> v1 = {5,1,3};
    int n = 5;
    int x =  s.rotate(v1,n);
    cout << x;
    
}