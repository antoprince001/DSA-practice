// given 12345 find sum of digits until it is single digit number

import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner sc=new Scanner (System.in);
        int n=sc.nextInt();
        if(n%9==0)
            System.out.println("9");
        else
            System.out.println(n%9);
}
}
