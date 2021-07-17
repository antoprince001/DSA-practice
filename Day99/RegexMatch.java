import java.util.*;
import java.util.regex.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		Pattern p=Pattern.compile(sc.next());
		Matcher m=p.matcher(s);
		int cnt=0;
		while(m.find())
		{
		    cnt++;
		System.out.println(m.group()+"-" +"start index:"+m.start()+"end index:"+m.end());    
		}
		System.out.println(cnt);
	}
}
