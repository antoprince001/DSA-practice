#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int SumOfGcd(int k,int arr[],int n){
    int sum=0;
    if(n==0){
        return -1;
    }
    for(int i=0;i<n;i++){
        sum += (k>arr[i]?gcd(arr[i],k) : gcd(k,arr[i]));
    }
    return sum;
}
int main()
{
    int out=0;
    int arr[]={15,12,10,3,2,1};
    out = SumOfGcd(6,arr,6);
    
    printf("%d",out);

    return 0;
}
