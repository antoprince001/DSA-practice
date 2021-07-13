import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int i,sum=0;
        for(i = 2; i <= n; i++) 
        {
            sum = (sum + 2) % i;
        }
        System.out.println(sum+1);

}
}
