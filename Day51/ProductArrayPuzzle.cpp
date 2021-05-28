/*
Given an array nums[] of size n, construct a Product Array P (of same size n) such that P[i] is equal to the product of all the elements of nums except nums[i].
*/

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here
        long long int product=1ll;
        vector<long long int> pros(n,1ll);
        long long int temp = 1ll;
        for(int i=0;i<n;i++){
            pros[i]*=temp;
            temp *= nums[i];
        }
        temp = 1ll;
        for(int i=n-1;i>=0;i--){
            pros[i]*=temp;
            temp *= nums[i];
        }
        return pros;
    }
};
