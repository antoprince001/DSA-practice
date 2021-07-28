import java.util.*;

public class Main
{
    public static int fibo(int n){
        if(n<=1){
            return 0;
        }
        else if(n==2){
            return 1;
        }
        else{
            return fibo(n-1) + fibo(n-2);
        }
    }
    
	public static void main(String[] args) {
		int num0=0,num1=1,n;
		int sum =0;
		Scanner s = new Scanner(System.in);
		n = s.nextInt();
	
		if(n==2){
		    sum = num1;
		}
		for(int ind = 2;ind<n;ind++){
		    sum = num0 + num1;
		    num0 = num1;
		    num1 = sum;
		}
		System.out.println("Fibonacci : "+sum);
		System.out.println("Fibonacci : "+fibo(n));
	}
}
