#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> Intersection_Brute(vector<int> &nums1 , vector<int> &nums2 )
    {
        int visited[nums2.size()] = {0};
        vector<int> result;
        for(int i = 0; i<nums1.size(); i++){
            for(int j = 0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j] && visited[j] != 1){
                    result.push_back(nums1[i]);
                    visited[j] = 1;
                }
            }
        }
        return result;
    }
    vector<int> Intersection_Better(vector<int> &nums1, vector<int> &nums2){
        vector<int> result;
        unordered_set<int> st(nums2.begin(), nums2.end());
        for(int i = 0; i<nums1.size(); i++){
            if(st.find(nums1[i]) != st.end()){
                result.push_back(nums1[i]);
            }
        }
        return result;
    }
    
    vector<int> Intersection_Optimal(vector<int> &nums1 , vector<int> &nums2){
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        vector<int> result;
        while(i < n1 && j < n2){
            if(nums1[i] < nums2[j]){
                i++;
            }else if(nums1[i] > nums2[j]){
                j++;
            }else{
                result.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return result;
    }
};
int main(){
    Solution s;
    
    vector<int> v = {1,2,3,4,5};
    vector<int> v1 = {1,2,3,6,7};
    vector<int> v2 = s.Intersection_Optimal(v,v1);
    for(int x : v2){
        cout << x << " ";
    }
}

