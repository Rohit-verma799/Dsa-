#include<bits/stdc++.h>
using namespace std;

int Majority_Element_Brute(vector<int> &nums){

    int majority = nums.size()/2;

    
    for(int i = 0; i<nums.size(); i++){
        int element = nums[i];
        int count = 0;
        for(int j = 0; j<nums.size(); j++){
            if(nums[j] == element){
                count++;
            }
        }
        if(count > majority){
            return element;
        }
    }
    return -1;
}

int Majority_Element_Better(vector<int> &nums){
    int majority = nums.size()/2;
    unordered_map<int,int> map;
    for(int x : nums) map[x]++;
    for(auto x : map){
       if(x.second > majority){
        return x.first;
       }
    }
    return -1;
}

int Majority_Element_optimal(vector<int> &nums){
    int majority = nums.size()/2;
    int ele;
    int cnt = 0;
    for(int i = 0; i<nums.size(); i++){
        if(cnt == 0){
            ele = nums[i];
            cnt = 1;
        }else if(nums[i] == ele){
            cnt++;
        }else{
            cnt--;
        }
    }
    return ele;
}
int main(){
    vector<int> v = {1,1,1,1,34,4};
   cout << Majority_Element_optimal(v);
    
}