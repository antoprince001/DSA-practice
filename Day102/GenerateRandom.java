import java.util.*;

public class Main
{
    
	public static void main(String[] args) {
		int  maxRange,minRange=0;
		
		Scanner s = new Scanner(System.in);
		maxRange = s.nextInt();
	
	    int randomNum1=(int)(Math.random()*(maxRange-minRange+1)+minRange);
		Random rand = new Random();
		int randomNum2=rand.nextInt()%maxRange;
		
		System.out.println("Random Number 1 :"+randomNum1);
		System.out.println("Random Number 2 : "+randomNum2);
		  

		

	}
}
