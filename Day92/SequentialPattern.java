import java.util.*;
public class Main{
    public static void main(String args[])
{
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int k=1,i,j;
    for(i=1;i<=n;i+=2,System.out.println()){
        for(j=1;j<=n;j++)
        {
            System.out.printf("%02d ",k++);
        }
        k=k+n;
    }
    if(n%2!=0)
      k=n-2;
    for(i=k;i>=1;i-=2,System.out.println()){
        for(j=1;j<=n;j++)
        {
            System.out.printf("%02d ",i*n+j);
        }
    }
}
}
