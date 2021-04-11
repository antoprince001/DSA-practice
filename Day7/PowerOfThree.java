// Given an integer n, return true if it is a power of three. Otherwise, return false.

class Solution {
    public boolean isPowerOfThree(int n) {
                
        if(n <= 0){
            return false;
        }
        
        int tn = 1;
        for(int i=1;i<20;i++){
            tn = tn*3;
        }
        return tn%n==0;
        
        
    }
}
