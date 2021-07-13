import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner s = new Scanner(System.in);
	    int num= s.nextInt();
	    int n= (int)Math.sqrt(num);	
	    System.out.println("Count :"+n);

	    for(int i=1;i<=n;i++){
	    System.out.println(" "+(i*i));

	    }
	}
}
