/*There will be two arrays of integers. Determine all integers that satisfy the following two conditions:

    The elements of the first array are all factors of the integer being considered
    The integer being considered is a factor of all elements of the second array

These numbers are referred to as being between the two arrays. Determine how many such numbers exist.
*/
class Result {

    /*
     * Complete the 'getTotalX' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER_ARRAY a
     *  2. INTEGER_ARRAY b
     */

    public static int gcd(int a,int b){
        if (a == 0)
            return b;
        if (b == 0)
            return a;
 
        if (a == b)
            return a;
 
        if (a > b)
            return gcd(a-b, b);
        return gcd(a, b-a);
        
    }
    
    public static int lcm(int a,int b){
        
       
        return (a*b)/gcd(a,b);
        
    }
    public static int getTotalX(List<Integer> a, List<Integer> b) {
    // Write your code here

        int lcmval = a.get(0);
        int gcdval = b.get(0);
        for(int i=1;i<a.size();i++){
                lcmval = lcm(lcmval,a.get(i));
        }
        for(int i=0;i<b.size();i++){
                gcdval = gcd(gcdval,b.get(i));
        }
        System.out.println(lcmval + " " + gcdval);
        int mullcm = lcmval;
        int i=2,count =0;
        while(mullcm <= gcdval){
            if(gcdval%mullcm == 0){
                count++;
            }
            mullcm = lcmval*i;
            i++;
        }
        return count;
    }

}
