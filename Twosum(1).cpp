#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
        int i,j;
        for(i=0;i<nums.size()-1;i++){
            for(j=i+1;j<=nums.size()-1;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {0,0};
    
    //     sort(nums.begin(),nums.end());
    //     int i=0,j=nums.size()-1;
    //     while(i<=j){
    //         if((nums[i]+nums[j])>target){
    //             j--;
    //         }
    //         else if((nums[i]+nums[j])<target){
    //             i++;
    //         }
    //         else if((nums[i]+nums[j])==target){
    //             break;
    //         }
    //     }
    //    return {i,j};
    }
};
