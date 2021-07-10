/*
12345 => 21435
1234  => 2143
*/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    int n,sum=0,sum1=0,safe=0,dig;
	    Scanner s = new Scanner(System.in);
	    n = s.nextInt();
	    
	    int size = ((int)Math.log10(n) + 1);
	    if(size%2!=0){
	        safe = n%10;
	        n = n/10;
	    }
	    
	    while(n!=0){
	        dig = n%10;
	        sum = sum*10 + dig;
	        n=n/10;
	    }
	    while(sum!=0){
	        dig = sum%100;
	        sum1 = sum1*100 + dig;
	        sum=sum/100;
	    }
	    if(size%2 == 0){
	        System.out.println(" "+sum1);
	    }
	    else{
	        System.out.println(" "+(sum1*10 + safe));
	    }
	    
	}
}
