/* 
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> c;
        
        for(auto i = nums.begin(); i!=nums.end();i++){
            if(c.find(*i) != c.end()){
                c[*i]++;
            }
            else{
                c[*i]=1;
            }
        }
        for(auto x : c){
            if(x.second>1){
                return true;
            }
        }
        return false;
    }
};
