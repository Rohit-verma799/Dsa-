#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                count++;
            }else{
                maxi = max(count,maxi);
                count = 0;
            }
        }
        return maxi;
    }
};

int main(){
    Solution s;
    vector<int> v = {1,1,1,0,0,1,0,1};
    cout << s.findMaxConsecutiveOnes(v);
}