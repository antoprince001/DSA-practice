import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		System.out.println("Palindrome Checker");
		Scanner s = new Scanner(System.in);
		boolean flag = false;
		String st = s.next();
		int n = st.length();
		st = st.toLowerCase();
		char[] str = st.toCharArray();
		for(int i=0;i<=n/2;i++){
		    if(str[i] != str[n-i-1]){
		        System.out.println("False");
		        flag = true;
		    }
		}
		if(flag==false)
		System.out.println("True");
		
	}
}
