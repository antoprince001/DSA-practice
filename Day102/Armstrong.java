import java.util.*;

public class Main
{
public static void main(String[] args) {
		long  n;
		
		Scanner s = new Scanner(System.in);
		n = s.nextLong();
	
	    int size=(int)Math.log10(n)+1;
		long temp = n,sum=0;
		while(temp!=0){
		    sum += (int)Math.pow(temp%10,size);
		    temp = temp/10;
		}
		if(sum == n){
		  System.out.println("Armstrong");

		}
		else {
		   System.out.println("Not Armstrong");

		}

	}
}
