import java.util.Scanner;
public class Count
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int even=0;
		int n= s.nextInt();
		int arr[] = new int[n];
		for(int i=0;i<n;i++){
		    arr[i] = s.nextInt();
		    if(arr[i]%2==0){
		        even++;
		    }
		} 
		System.out.println(even+" "+(n-even));
	}
}
