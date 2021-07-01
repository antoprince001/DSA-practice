/*.
During merge the invcount has to be considered which will be mid-i. Where i is left index where arr[i]>arr[j].
Since sum of left, right and their merge gives the inversion count
*/

#include <bits/stdc++.h>

using namespace std;
int merge(int arr[],int temp[],int left,int mid,int right){
    
    int i=left;
    int j=mid;
    int k=left;
    int count=0;
    while ((i <= mid - 1) && (j <= right)) {
        
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];            
        }
        else{
            temp[k++]=arr[j++];
            
            count += (mid-i);
        }
    }
    while(i<=mid-1){
        temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
    }
    for(int index=left;index<=right;index++){
        arr[index]=temp[index];
    }
    return count;
    
}
int mergesort(int arr[],int temp[],int left,int right){
    int count=0;
    
    if(left<right){
    int mid = (left + right)/2;
    
    count += mergesort(arr,temp,left,mid);
    count += mergesort(arr,temp,mid+1,right);
    
    count += merge(arr,temp,left,mid+1,right);
    
    }
    
    return count;
    
}
int invcount(int arr[],int n){
    
    int temp[n];
    return mergesort(arr,temp,0,n-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Inversion count"<<invcount(arr,n);
    return 0;
}
