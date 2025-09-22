#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findTwoElement_brute(vector<int> &nums){
        int missing = -1;
        int repeated = -1;
        for(int i = 1; i<=nums.size(); i++){
             int cnt = 0;
             for(int j = 0; j<nums.size(); j++){
                if(nums[j] == i){
                    cnt++;
                }
             }
             if(cnt == 0){
                missing = i;
             }
             if(cnt > 1){
                repeated = i;
             }
             if(missing != -1 && repeated != -1){
                break;
             }
        }
        return {repeated, missing};
    }
    vector<int> findTwoElement_better(vector<int> &nums){
        int missing = -1;
        int repeated = -1;
       unordered_map<int,int> map;
       for(int x : nums){
        map[x]++;
       }

       for(int i = 1; i<=nums.size(); i++){
           if(map[i] == 0){
              missing = i;
           }
           if(map[i] > 1){
            repeated = i;
           }
            if(missing != -1 && repeated != -1){
                break;
            }
       }
        return {repeated, missing};

    }
    vector<int> findTwoElement(vector<int> &nums){
       long long S = 0;
       long long Sn = 0;
       long long S2 = 0;
       long long S2n = 0;
       long long n = nums.size();
       for(int i = 0; i<nums.size(); i++){
         S += (long long)nums[i];
         S2 += (long long)nums[i]*(long long)nums[i];
       }

       Sn = (n*(n+1))/2;
       S2n = (n*(n+1)*(2*n+1))/6;

       long long val1 = S-Sn;
       long long val2 = S2 - S2n;
        
       val2 = val2/val1;

      long long  x = (val1+val2)/2;
      long long  y = val2-x;

      return {(int)x, (int)y};
    }

};


int main(){
    Solution s;
    vector<int> v = {4,3,6,2,1,1};
    vector<int> v1 = s.findTwoElement(v);
    for(int x : v1){
        cout << x << " ";
    }

}

