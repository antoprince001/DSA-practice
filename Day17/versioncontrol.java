/* Given n files, m files maybe tracked and k files may not be tracked. Given m values and k values identify the values that are common in both as well as 
not occuring in both */

import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	
	    Scanner s = new Scanner(System.in);

		int n= s.nextInt();
		int m= s.nextInt();
		int k= s.nextInt();
		int yesboth =0 ,notboth =0;
		int arr[] = new int[n+1];
		int marr[] = new int[m+1];
		int karr[] = new int[k+1];
		for(int i=1;i<=n;i++){
		    arr[i]=-1;
		}
		for(int i=1;i<=m;i++){
		    marr[i] = s.nextInt();
		    if(arr[marr[i]]==-1){
		        arr[marr[i]]=0;
		    }
		    arr[marr[i]]++;
		    
		} 
		for(int i=1;i<=k;i++){
		    karr[i] = s.nextInt();
		    if(arr[karr[i]]==-1){
		        arr[karr[i]]=0;
		    }
		    arr[karr[i]]++;
		}
		
		for(int i=1;i<=n;i++){
		    if(arr[i] == -1){
		        notboth++;
		        
		    }
		    if(arr[i]==2){
		        yesboth++;
		    }
		}
		System.out.println(yesboth+" "+notboth);
	}
}
