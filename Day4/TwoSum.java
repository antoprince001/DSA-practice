// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. 

class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        for(int i=0;i<nums.length-1;i++){
            for(int j=i+1;j<nums.length;j++){
                if(nums[i]+nums[j] == target){
                    int arr[] = { i,j };
                    return arr;
                }
            }
        }
        int arr[] = {0};
        return arr;
    }
    
}
