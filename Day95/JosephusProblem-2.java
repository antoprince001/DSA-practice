import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=1;
        while(m<=n)
        {
            m*=2;
        }
        m=m/2;
        int ans=((n-m)*2)+1;
        System.out.println(ans);

}
}
