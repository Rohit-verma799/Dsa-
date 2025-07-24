#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void rotate(vector<int> &nums, int k){
        while(k--){
            int first = nums[0];
            for(int i = 1; i<nums.size(); i++){
                nums[i-1] = nums[i];
            }
            nums[nums.size()-1] = first;
        }
    }
    
    void rotate1(vector<int> &nums, int k){
      vector<int> temp;
      for(int i = 0; i<k; i++){
          temp.push_back(nums[i]);
      }
      for(int i = k; i<nums.size(); i++){
          nums[i-k] = nums[i];
      }
     
      for(int i = nums.size()-k; i<nums.size(); i++){
          nums[i] = temp[i-(nums.size()-k)];
         
      }
    }
    
    void rotate_optimal(vector<int> &nums, int k){
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        reverse(nums.begin(), nums.end());
        
    }
};

int main(){
    Solution s;
    vector<int> v = {1,2,3,4,5,6,7};
    vector<int> v1 = {1,2,3,4,5,6,7};
      vector<int> v2 = {1,2,3,4,5,6,7};
    s.rotate(v,3);
    s.rotate(v1,3);
    s.rotate(v2,3);
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
     for(int x : v1){
        cout << x << " ";
    }
    cout << endl;
     for(int x : v2){
        cout << x << " ";
    }
}

