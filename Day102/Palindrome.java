import java.util.*;

public class Main
{
    public static boolean checkPalindrome(int n){
        
        int temp = n,rev=0;
        while(temp!=0){
            rev = rev*10 + temp%10;
            temp = temp/10;
        }
        return (n==rev ?  true :  false);
    }
    
	public static void main(String[] args) {
		int n;
		
		Scanner s = new Scanner(System.in);
		n = s.nextInt();
	
		System.out.println("Palindrome : "+checkPalindrome(n));
	}
}
