#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int Missing_1(vector<int> &nums, int n){
        for(int i = 0; i<=n; i++){
            int flag = 0;
            for(int j = 0; j<nums.size(); j++){
                if(nums[j] == i){
                    flag = 1;
                    break;
                }
            }
            if(!flag){
                 return i;
            }
               
            
        }
        return {};
    }
    int Missing_2(vector<int> &nums , int n){
        sort(nums.begin(),nums.end());
            for(int i = 0; i<=n; i++){
                if(nums[i] != i){
                    return i;
                }
            }
        return {};
    }
    
    int Missing_3(vector<int> &nums, int n){
        unordered_set<int> st(nums.begin(), nums.end());
        for(int i = 0; i<=n; i++){
            if(st.find(i) == st.end()){
                return i;
            }
        }
        return {};
    }
    
    int Missing_4(vector<int> &nums, int n){
         int total = 0;
         for(int i = 1; i<=n; i++){
             total += i;
         }
         int sum = 0;
         for(int i = 0; i<nums.size(); i++){
             sum += nums[i];
         }
         return total-sum;
    }
    int Missing_XOR(vector<int>& nums, int n) {
    int xor_all = 0;
    int xor_arr = 0;
    for (int i = 0; i <= n; i++) {
        xor_all ^= i;           
    }
    for (int i = 0; i < nums.size(); i++) {
        xor_arr ^= nums[i];    
    }
    return xor_all ^ xor_arr;   
}
};

int main(){
    Solution s;
    vector<int> v = {3,0,1};
   cout << s.Missing_4(v,3);
}