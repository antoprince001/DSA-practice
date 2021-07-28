import java.util.*;
// Range from 0 to 99,999
public class Main
{
    
    public static String ten(int n){
        switch(n){

            case 2:
                return "Twenty";
            case 3:
                return "Thirty";
            case 4:
                return "Fourty";
            case 5:
                return "Fifty";
            case 6:
                return "Sixty";
            case 7:
                return "Seventy";
            case 8:
                return "Eighty";
            case 9:
                return "Ninety";
            
        }
        return " ";
    }
    public static String digit(int n){
        switch(n){
            case 0:
                return " ";
            case 1:
                return "One";
            case 2:
                return "Two";
            case 3:
                return "Three";
            case 4:
                return "Four";
            case 5:
                return "Five";
            case 6:
                return "Six";
            case 7:
                return "Seven";
            case 8:
                return "Eight";
            case 9:
                return "Nine";
            case 10:
                return "Ten";
            case 11:
                return "Eleven";
            case 12:
                return "Twelve";
            case 13:
                return "Thirteen";
            case 14:
                return "Fourteen";
            case 15:
                return "Fifteen";
            case 16:
                return "Sixteen";
            case 17:
                return "Seventeen";
            case 18:
                return "Eighteen";
            case 19:
                return "Nineteen";
            default:
                if(n>19 && n<100){
                    return ten(n/10) +" "+ digit(n%10);
                }
            
        }
        return " ";
    }
	public static void main(String[] args) {
		int  num;
		String word = " ";
		Scanner s = new Scanner(System.in);
		num = s.nextInt();
		int base = 1000;
		while(num != 0){
		    
		    if(num>=1000){
		        word = word + digit(num/1000) + " Thousand ";
		        num = num%1000;
		    }
		    else if(num>=100){
		        if(num/100 != 0)
		        word = word + digit((num/100)%10) + " Hundred ";
		        num = num%100;
		    }
		    else{
		       if(num<=20){
		           System.out.println("check"+num);
		           word = word + digit(num);
		           num=0;
		       }    
		       else{
		           word = word + ten(num/10) +" " +digit(num%10);
		           num=0;
		       }
		    }
		}
	
	    System.out.println(word);

		

	}
}
