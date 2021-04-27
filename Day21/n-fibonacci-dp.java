//  Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1

class Solution
{
    //Function to return list containing first n fibonacci numbers.
    public static long[] printFibb(int n) 
    {
        //Your code here
        long lookup[]  = new long[n];
        lookup[0] = 1;
        if(n==1){
            return lookup;
        }
        
        lookup[1] = 1;
        for(int i=2;i<n;i++){
            lookup[i] = lookup[i-1] + lookup[i-2];
        }
        return lookup;
    }
}
