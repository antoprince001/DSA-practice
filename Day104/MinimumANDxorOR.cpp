/*
Minimum AND xor OR

Given an array
of  integers. Find out the minimum value  a(i) AND a(j) xor a(i) OR a(j)
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main(){
	int T,N,val,min =INT_MAX;

	cin>>T;
	while(T-- > 0){
		min =INT_MAX;
		cin>>N;
		int arr[N];

		for(int i=0;i<N;i++){
			cin>>arr[i];
		}
		sort(arr,arr+N);
		// for(int i=0;i<N-1;i++){
		// 	for(int j=i+1;j<N;j++){
		// 		val = ((arr[i]&arr[j])^(arr[i]|arr[j]));
		// 		if(val<min){
		// 			printf("%d ",val);
		// 			min = val;
		// 		}
		// 	}
		// }
		for(int i=0;i<N-1;i++){
				val=((arr[i]&arr[i+1])^(arr[i]|arr[i+1]));
				//val = (arr[i]^arr[i+1]);
				if(val<min){
					min = val;
				}
		}
		cout<<min<<endl;
	}
	return 0;
}

