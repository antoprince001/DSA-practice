/* 
Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry =1,n;
        n = digits.size()-1;
        if(digits[n] == 9){
            // digits[n]=0;
            // carry = 1;
            // n=n-1;
            while(n>=0){
                if(digits[n]==9){
                    carry=1;
                    digits[n]=0;
                    n--;
                    vector<int> a = {1};
                    if(n<0)
                    {
                    a.insert(a.end(),digits.begin(),digits.end());
                    digits = a;
                    }
                }else{
                    digits[n]+=carry;
                    carry=0;
                    break;
                }
            }
        }
        else{
            digits[n]++;
        }
        return digits;
    }
};
