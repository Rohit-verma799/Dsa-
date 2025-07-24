#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> Union_brute(vector<int> &nums1, vector<int> &nums2){
        set<int> st;
        for(int i = 0; i<nums1.size(); i++){
            st.insert(nums1[i]);
        }
        for(int i = 0; i<nums2.size(); i++){
            st.insert(nums2[i]);
        }
        
        vector<int> v;
        for(auto it : st){
        v.push_back(it);
         }
        return v;
        
    }
    
    vector<int> Union_optimal(vector<int> &nums1, vector<int> &nums2){
        int n = nums1.size();
        int n1 = nums2.size();
        int i = 0;
        int j = 0;
        vector<int> result;
        while(i < n && j < n1){
            if(nums1[i] <= nums2[j]){
                if(result.size() == 0 || result.back() != nums1[i]){
                    result.push_back(nums1[i]);
                }
                i++;
            }else{
                if(result.size() == 0 || result.back() != nums2[j]){
                    result.push_back(nums2[j]);
                }
                j++;
            }
        }
        while(i < n){
             if(result.size() == 0 || result.back() != nums1[i]){
                    result.push_back(nums1[i]);
                }
                i++;
        }
        while(j < n1){
              if(result.size() == 0 || result.back() != nums2[j]){
                    result.push_back(nums2[j]);
                }
                j++;
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {1,2,3,4,5};
    
  vector<int> v3 = s.Union_optimal(v1,v2);
  for(int x : v3){
      cout << x << " ";
  }
   
   

    return 0;
}