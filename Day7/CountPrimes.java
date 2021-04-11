// Count the number of prime numbers less than a non-negative number, n.

class Solution {
    public int countPrimes(int n) {
        
        boolean flag;
        int c=0;
        if(n<=2){
            return 0;
        }
        if(n==3){
            return 1;
        }
        for(int i=2;i<n;i++){
            flag = false;
            for(int j=2;j*j<=i;j++){
                if(i%j == 0){
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                c++;
            }
        }
        return c;
        
    }
}
