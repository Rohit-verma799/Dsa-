#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
vector<int> Twosum_Brute(vector<int> nums, int target){
    for(int i = 0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size(); j++){
            if(nums[i] + nums[j] == target){
                return {i,j};
            }
        }
    }
    return {};
}

vector<int> Twosum_optimal(vector<int> nums, int target){
    unordered_map<int,int> map;
    for(int i = 0; i<nums.size(); i++){
        int rem = target-nums[i];
        if(map.find(rem) != map.end()){
            return {map[rem],i};
        }
        map[nums[i]] = i;
    }
    return {};
}
bool Twosum_withoutIndexReturn(vector<int> nums, int target){
    int left = 0;
    int right = nums.size()-1;
    sort(nums.begin(), nums.end());
    while(left < right){
        int sum = nums[left] + nums[right];
        if(sum == target){
            return true;
        }
        
        if(sum > target){
            right--;
        }else{
            left++;
        }
        
    }
    return false;
}
};


int main(){
    Solution s;
    vector<int> v = {1,2,3,54,2,56,6};
    int target = 110;
    vector<int> ans = s.Twosum_withoutIndexReturn(v,target);
    for(int x : ans){
        cout << x << " ";
    }
}