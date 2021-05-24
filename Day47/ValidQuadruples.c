#include <stdio.h>
int validQuadruples(int n,int arr[]){
    
    int count=0;
    
    for(int i=0;i<n-4;i++){
        if((arr[i] + arr[i+1]) == (arr[i+2] + arr[i+3])){
            count++;
        }
    }
    return count;
}

int main()
{
    
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a = validQuadruples(n,arr);
    printf("%d",a);
    return 0;
}
