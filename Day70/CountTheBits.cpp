// Given a number N, print the number of set bits in the binary representation of this number.
#include<bits/stdc++.h>
using namespace std;
int countbits(int n){
    int count=0;

    while(n){

    n = (n & (n-1));
    count++;
    }

    return count;
}
int main(){
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>n;
        cout<<countbits(n)<<endl;
    }
    return 0;
}
