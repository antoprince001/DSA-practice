/*
Given an array arr[] of N non-negative integers representing the height of blocks. 
If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
*/

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int max(int a,int b){
        return a>b?a:b;
    }
    int min(int a,int b){
        return a>b?b:a;
    }
    int trappingWater(int arr[], int n){
        // Code here
        int capacity = 0;
        int left[n],right[n];
        
        left[0] = arr[0];
        for(int i=1;i<n;i++){
            left[i] = max(arr[i],left[i-1]);
        }
        right[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            right[i] = max(arr[i],right[i+1]);
        }
        
        for(int i=0;i<n;i++){
            capacity += (min(left[i],right[i]) - arr[i]);
        }
        return capacity;
    }
};
