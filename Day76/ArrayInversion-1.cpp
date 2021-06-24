#include <iostream>

using namespace std;

int main()
{
    int n,invcount=0;
    
    cout<<"Enter size";
    cin>>n;
    
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
            invcount++;
        }
    }
    cout<<invcount;

    return 0;
}
