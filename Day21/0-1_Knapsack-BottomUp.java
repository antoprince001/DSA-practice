class Solution 
{ 
    
    static int max(int a,int b){
        return a>b?a:b;
    }
    //Function to return max value that can be put in knapsack of capacity W.
    static int knapSack(int W, int wt[], int val[], int n) 
    { 
         // your code here
         int vw[][]  = new int[n+1][W+1];
       
         
         for(int i=0;i<=n;i++){
             for(int j=0;j<=W;j++){
                 
                 if(i==0 || j==0){
                     vw[i][j] = 0;
                     
                 }
                 else if(wt[i-1]<=j){
                     vw[i][j] = max(val[i-1] + vw[i-1][j-wt[i-1]] ,  vw[i-1][j] );
                 }
                 else{
                     vw[i][j] = vw[i-1][j];
                 }
             }
         }
         
         return vw[n][W];
     } 
}

