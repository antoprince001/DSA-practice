import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		System.out.println("String Counter");
		Scanner s = new Scanner(System.in);
		String st = s.nextLine();
		int n = st.length();
		st = st.toLowerCase().trim();
		char[] str = st.toCharArray();
		int vowels = 0, cons = 0;
		String v = "aeiou";
		for(char c: str){
		   System.out.println(c+"");
		   if(v.indexOf(c)!=-1){
		       vowels++;
		   }
		   else if(c!=' '){
		       cons++;
		   }
		}
		System.out.println("Vowels"+vowels+",Consonants:"+cons);
	}
}
