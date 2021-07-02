#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    cin>>n>>k;
    int arr[k+1][n+1];
    for(int i=0;i<=k;i++){
        for(int num=0;num<=n;num++){
            if(i==0 || num==0){
                arr[i][num]=0;
            }
            else if(i==1){
                arr[i][num]=num;
            }
            else if(i<=num){
                arr[i][num] = arr[i-1][num-1] + arr[i][num-1];
            }
            else{
                arr[i][num] = arr[i-1][num-1] + arr[i-1][num];        
            }
        }
    }
    
    cout<<arr[k][n];
    return 0;
}
