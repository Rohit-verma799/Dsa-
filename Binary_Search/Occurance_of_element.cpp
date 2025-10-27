#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int Occurance(vector<int> &nums, int k){
        int low = 0;
        int high = nums.size()-1;
        int first = -1;
        int last = -1;

        // lower bound
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] >= k){
                if(nums[mid] == k){
                    first = mid;
                }
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        // not upper bound exactly 
        low = 0;
        high = nums.size()-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] <= k){
                if(nums[mid] == k){
                    last = mid;
                }
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

        if(first == -1 || last == -1){
            return 0;
        }
        return (last-first)+1;
    }
};

int main(){
    vector<int> v = {1,2,5,5,5,5,123,125};
    int k = 5;
    Solution s;
    cout << s.Occurance(v,k);
}