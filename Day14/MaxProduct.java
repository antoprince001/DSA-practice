
import java.util.Scanner;
public class Main{

     public static void main(String []args){
        Scanner s = new Scanner(System.in);
        
        int n = s.nextInt();
        int arr[] = new int[n];
        int max = Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            arr[i] = s.nextInt();
        }
        
        if(n<2){
            System.out.println("No max");
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(arr[i] * arr[j] > max)
                        max = arr[i]*arr[j];
                }
            }
            
            System.out.println("Max"+max);
        }
     }
}
