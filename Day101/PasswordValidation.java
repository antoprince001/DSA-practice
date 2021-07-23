import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String password = s.next();
		
		char []passwords = password.toCharArray();
		
		int charLen=0,upperLen=0,lowerLen=0,specialLen=0,numLen=0,ch;
		charLen = password.length();
		for(int i=0;i<charLen;i++){
		    ch = (int)passwords[i];
		    if(ch>= 97 && ch<=122){
		        lowerLen++; //1 lower
		    }
		    else if(ch >= 65 && ch<=91){
		        upperLen++; // 2 upper
		    }
		    else if(ch>=48 & ch<=57){
		        numLen++;  // 3 number
		    }
		    else{
		        specialLen++; //2 special characters
		    }
		    
		    
		}
		
		if(charLen>15 || charLen<10){
		 System.out.println("Invalid");   
		}
		else if(numLen < 3 ){
		 System.out.println("Invalid");   
		}
		else if(upperLen < 2 ){
		 System.out.println("Invalid");   
		}
		else if(lowerLen < 1 ){
		 System.out.println("Invalid");   
		}
		else if(specialLen < 3 ){
		 System.out.println("Invalid");   
		}
		else{
		    System.out.println("Valid");     
		}
	}
}
