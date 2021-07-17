import java.util.*;
public class Main
{
    public static String leftrotate(String str,int d){
        String ans = str.substring(d) + str.substring(0,d);
        return ans;
    }
    public static String rightrotate(String str,int d){
        return leftrotate(str,str.length()-d);
    }
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
		System.out.println(leftrotate(str,sc.nextInt()));
		System.out.println(rightrotate(str,sc.nextInt()));
	}
}
