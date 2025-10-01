#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int search_insert_position(vector<int> &nums, int x){
    int low = 0, high = nums.size()-1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(nums[mid] == x) return mid;
        else if(nums[mid] < x) low = mid + 1;
        else high = mid - 1;
    }

    return low;
}

};

int main(){
    Solution s;
    vector<int> v = {1,2,3,5};
    cout << s.search_insert_position(v,4);
}