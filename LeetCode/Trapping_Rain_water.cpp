#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    int Water_Brute(vector<int> &height){
        int water = 0;
        for(int i = 0; i<height.size(); i++){
          int leftMax = 0;
          int rightMax = 0;
          
         for(int j = i; j>=0; j--){
            leftMax = max(leftMax, height[j]);
         }

         for(int j = i; j<height.size(); j++){
            rightMax = max(rightMax, height[j]);
            if(rightMax >= leftMax){
                break;
            }
         }

         water += min(leftMax, rightMax) - height[i];
       }
       return water;
    }

    int Water_optimal(vector<int> &height){
        int left = 0;
        int right = height.size()-1;
        int leftMax = 0;
        int rightMax = 0;
        int water = 0;
        while(left < right){
            if(height[left] < height[right]){
                leftMax = max(leftMax , height[left]);
                water += leftMax - height[left];
                left++;
            }else{
                rightMax = max(rightMax , height[right]);
                water += rightMax - height[right];
                right--;
            }
        }
        return water;
    }
};

int main() {
    Solution s;
    vector<int> nums = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << s.Water_optimal(nums);
    
}