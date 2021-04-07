/* 
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum =0;
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return nums[0];
        }
        int i;
        for(i=0;i<nums.size()-1;i+=2){
            
            // if(i+1>=nums.size()){
            //     return nums[i];
            // }
             if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return nums[i];
        
    }
};
