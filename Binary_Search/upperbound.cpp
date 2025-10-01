#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int upperbound(vector<int> &nums, int x){
        int low = 0;
        int high = nums.size()-1;
        int ans = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] > x){
               ans = mid;
               high =  mid-1;
            }else{
                low = mid+1;
            }   
        }

        return ans;
    }
};

int main(){
    Solution s;
    vector<int> v = {1,2,3,4};
    cout << s.lowerBound(v,3);
}