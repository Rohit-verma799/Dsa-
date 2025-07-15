#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Solution {
public:
    int maxsumofsubarray(vector<int> nums) {
        int sum = 0;
        int maxsum = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
           sum += nums[i];
           if(sum < 0){
            sum = 0;
           }

           if(sum > maxsum){
            maxsum = sum;
            
           }
        }
        return maxsum;
    }
};

int main() {
    Solution s;
    vector<int> v = {-1,-2,3,4};
   cout<< s.maxsumofsubarray(v);
    
}
