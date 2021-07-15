import java.util.*;
public class Main{
    public static int max(int a ,int b)
    {
        return a>b?a:b;
    }
    public static void main(String args[])
    {
        
        Scanner sc=new Scanner(System.in);
        String n=sc.next();
        String n1=sc.next();
        int i,j;
        int l=n.length();
        int l1=n1.length();
        int a[][]=new int[l1+1][l+1];
        char []str=n.toCharArray();
        char []str1=n1.toCharArray();
        for(i=0;i<=l1;i++)
        {
            for(j=0;j<=l;j++)
            {
                a[i][j]=0;
            }
            
        }
        for(i=1;i<=l1;i++)
        {
            for(j=1;j<=l;j++)
            {
               if(str1[i-1]==str[j-1])
               a[i][j]=a[i-1][j-1]+1;
               else
               a[i][j]=max(a[i-1][j],a[i][j-1]);
            }
        }
        System.out.println(a[l1][l]);
    }
}
