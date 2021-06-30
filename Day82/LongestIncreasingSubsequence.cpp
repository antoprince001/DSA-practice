/* The Longest Increasing Subsequence (LIS) problem is to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order. For example, the length of LIS for {10, 22, 9, 33, 21, 50, 41, 60, 80} is 6 and LIS is {10, 22, 33, 50, 60, 80}
*/
#include<bits/stdc++.h>
using namespace std;

int lis(vector<int> arr,int n){

    int maxv=0;
    int lisarr[n];

    for (int i = 0; i < n; i++)
            lisarr[i] = 1;
    for(int i=1;i<n;i++){
        lisarr[i] = 1;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] && lisarr[i] < (lisarr[j] + 1)){
                lisarr[i] = lisarr[j] + 1;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(maxv<lisarr[i]){
            maxv = lisarr[i];
        }
    }

    return maxv;
}
int main(){

    int n,a;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    cout<<lis(arr,n);

    return 0;
}
