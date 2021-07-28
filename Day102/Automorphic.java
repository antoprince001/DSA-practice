import java.util.*;
public class Main
{

	public static void main(String[] args) {
		int  num,flag=1;
		Scanner s = new Scanner(System.in);
		num = s.nextInt();
		int square = num*num;
		int numLen = (int)Math.log10(num) + 1;
		while(numLen>0){
		    if(square%10 == num%10){
		        square /=10;
		        num/=10;
		        numLen--;
		    }
		    else{
		        flag = 0;
		        break;
		    }
		}
	    if(flag ==  1)
	    System.out.println("Automorphic");
	    else
	    System.out.println("Not Automorphic");

		

	}
}
