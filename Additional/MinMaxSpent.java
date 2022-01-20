// Past Thoughtworks off campus Question 

import java.util.*;
public class Main
{
    
    public static int findMinCost(int[] prices, int n, int k){
        int left = 0;
        int right = n;
        int cost = 0;
        while(left < right){
            cost += prices[left];
            left++;
            right = right - k;
        }
        return cost;
    }
    public static int findMaxCost(int[] prices, int n, int k){
        int left = 0;
        int right = n;
        int cost = 0;
        while(left < right){
            cost += prices[right-1];
            right = right - 1;
            left = left + k;
        }
        return cost;
    }
	public static void main(String[] args) {
		
		Scanner s  = new Scanner(System.in);
		int t = s.nextInt();
		
		for(int testcase = 0 ; testcase < t; testcase++){
		    int n = s.nextInt();
		    int k = s.nextInt();
		    
		    int prices[] = new int[n];
		    for(int i=0;i<n;i++){
		        prices[i] = s.nextInt();
		    }
		    
		    Arrays.sort(prices);
		    int min = findMinCost(prices,n,k);
		    int max = findMaxCost(prices,n,k);
		    System.out.println(min+" "+max);
		}
	}
}
