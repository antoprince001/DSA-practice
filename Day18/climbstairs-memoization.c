
int climbStairs(int i,int n , int *arr){
    
    if(i>n){
        return 0;
    }
    else if(i==n){
        return 1;
        
    }
    else if(arr[i]>0){
        return arr[i];
    }
    else{
        arr[i] = climbStairs(i + 1, n, arr) + climbStairs(i + 2, n, arr);
        return arr[i];
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int *arr = (int *)malloc((n+1)*sizeof(int));
    for(int i=0;i<=n;i++){
        arr[i] = 0;
    }
    printf("%d",climbStairs(0,n,arr));
    
    return 0;
}
