import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner s = new Scanner(System.in);
	    int num= s.nextInt();
	    int n= (int)(Math.log(num)/Math.log(2));
	    System.out.println(n+"");
	    n=0;
	    while(num != 0){
	        num/=2;
	        n++;
	    }
	   	System.out.println(n-1+"");

	}
}
