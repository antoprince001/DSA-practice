/*
4
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
import java.io.*;
import java.util.*;
class Main{
	public static int min(int num1,int num2,int num3,int num4)
{
	int e=num1>num2?num2:num1;
	int f=num3>num4?num4:num3;
	return e>f?f:e;
}
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
	int a,i,j,x;
	a=sc.nextInt();
	for (i=0;i<(a*2-1);i++){
	    for (j=0;j<(a*2-1);j++){
	    	x=(min(i,j,((a*2-2)-i),((a*2-2)-j)));
	    	System.out.print((a-x)+" ");
	        }
	   System.out.print("\n");}

	}
}
