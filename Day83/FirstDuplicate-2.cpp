// Using set
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=6,minnext=6;
    int arr[] = {2,1,3,5,3,2};
    unordered_set<int> h;
    for (int i=0;i<n;i++) {
        if(h.find(arr[i])== h.end()){
            h.insert(arr[i]);
            
        }
        else{
            cout<<arr[i];
            return 0;
        }
    }
  

    return 0;
}
