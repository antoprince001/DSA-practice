class Solution
{
public:
    int trailingZeroes(int N)
    {
        // Write Your Code here
        int count=0,five=5;
        
        while(five<=N){
            count += N/five;
            five = five*5;
        }
        return count;
    }
};
