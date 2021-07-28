import java.util.*;

public class Main
{
    public static long  factorial(long  n){
        
        if(n==0){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
       
    }
    
	public static void main(String[] args) {
		long  n,fact=1;
		
		Scanner s = new Scanner(System.in);
		n = s.nextLong();
	
	    for(long  i=2;i<=n;i++){
	        fact*=i;
	    }
		System.out.println("Factorial : "+factorial(n));
		System.out.println("Factorial : "+fact);

	}
}
