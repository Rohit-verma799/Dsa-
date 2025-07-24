#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void movezero_brute(vector<int> &nums){
        vector<int> temp;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            }
        }
        int i=0;
        for( i; i<temp.size(); i++){
            nums[i] = temp[i];
        }
        for(i; i<nums.size(); i++){
            nums[i] = 0;
        }
        
        
    }
    
    void movezero_my(vector<int> &nums){
        int count = 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i] == 0){
                count++;
            }else{
                if(count > 0){
                    swap(nums[i],nums[i-count]);
                }
            }
        }
    }
    
    void movezero_optimal(vector<int> &nums){
        int j = -1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
        
        for(int i = j+1; i<nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main(){
    Solution s;
    vector<int> v = {1,2,0,0,0,0,0,0,6,43,2,4,5};
    s.movezero_optimal(v);
    for(int x: v){
        cout << x << " ";
    }
}
