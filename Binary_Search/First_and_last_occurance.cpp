#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> byBinarySearch(vector<int> &nums, int k){
        int low = 0;
        int high = nums.size()-1;
        int first = -1;
        int last = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] == k){
                first = mid;
                high = mid-1;
            }

            if(nums[mid] < k){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        low = 0;
        high = nums.size()-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] == k){
                last = mid;
                low = mid+1;
            }

            if(nums[mid] < k){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

        return {first,last};
        
    }

    vector<int> byBounds(vector<int> &nums, int k){
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

        if(first == -1 || last == -1) return {-1,-1};
        return {first , last};
    }
};

int main(){
    Solution s;
    vector<int> vec = {1,2,5,5,5,5,123,125};
    int k = 5;
    vector<int> v = s.byBounds(vec,k);

    for(int x : v){
        cout << x << endl;
    }
}