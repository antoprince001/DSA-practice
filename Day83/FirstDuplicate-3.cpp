// Using same array as hash with negative notation
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n=6,minnext=6;
    int arr[] = {2,1,3,5,3,2};
    for (int i=0;i<n;i++) {
        if(arr[abs(arr[i])-1]<0){
            cout<<(arr[i]>0?arr[i]:arr[i]*-1);
            return 0;
        }
        else{
           arr[abs(arr[i])-1] *= -1; 
        }
    }
  

    return 0;
}
