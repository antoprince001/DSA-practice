'''
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
'''
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zcount=0;
        for(auto i=nums.begin();i!=nums.end();i++){
            if(*i==0){
                zcount++;
            }
        }
        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
        while(zcount--){
            nums.insert(nums.end(),0);
        }
    }
};
