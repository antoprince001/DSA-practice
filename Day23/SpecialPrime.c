/* special prime 

Given N, find count of x,y pairs whose sum of sum of digits is a prime
 
*/
#include <stdio.h>
int sumofdigits(int num){
    
    int sum=0,dig;
    while(num){
        dig = num%10;
        sum+=dig;
        num=num/10;
    }
    
    return sum;
}
int countdigits(int N,int sum){
    int val=0,count=0;
    while(val<=N){
        if(sumofdigits(val)==sum){
            count++;
            val = val+9;
        }
        else
            val++;
    }
    return count;
}
int isprime(int num){
    int i;
    if(num==1 || num==0){
        return 0;
    }
    for(i=2;i<=sqrt(num);i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    
    int N,count[451] = { 0 },x,y,i,val,ans=0;
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        count[i] = countdigits(N,i);
    }
    
    for(x=0;x<=N;x++){
        for(y=x;y<=N;y++){
            val = sumofdigits(x) + sumofdigits(y);
            if(isprime(val) == 1){
                ans+=count[x]*count[y];
            }
        }
    }
    printf("%d",ans);
    return 0;
}
