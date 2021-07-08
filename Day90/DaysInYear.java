import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int d=sc.nextInt();
        int m=sc.nextInt();
        int y=sc.nextInt();
        int sum=0;
        switch(m)
        {
            case 1:sum=sum+31;
            case 2:if((y%4==0 &&y%100!=0 )||(y%400==0))
                    sum=sum+29;
                else
                sum=sum+28;
            case 3:sum+=31;
            case 4:sum+=30;
            case 5:sum+=31;
            case 6:sum+=30;
            case 7:sum+=31;
            case 8:sum+=31;
            case 9:sum+=30;
            case 10:sum+=31;
            case 11:sum+=30;
            case 12:sum+=31;
        }
        sum=sum-d;
        System.out.println(sum);//remaining
        if((y%4==0 &&y%100!=0 )||(y%400==0))
        System.out.println(366-sum);
        else
        System.out.println(365-sum);
    }
}
