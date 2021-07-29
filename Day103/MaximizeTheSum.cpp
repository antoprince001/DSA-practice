#include <bits/stdc++.h>
using namespace std;

int main(){
	long T,N,k,i;
	cin>>T;
	while(T--){
		cin>>N>>k;
		int arr[N];
		
		map<long,long> hash;
		for(i=0;i<N;i++){
			cin>>arr[i];
			if(hash.find(arr[i]) == hash.end()){
				hash[arr[i]] = 1;
			}
			else{
				hash[arr[i]] = hash[arr[i]] + 1;
			}
		}
		map<int,int>::reverse_iterator it;
		int count=0,sum=0;
		for (it = hash.rbegin(); it != hash.rend(); it++) {
			if(count == k){
				break;
			}
			else{
				sum += (it->first*it->second);
				count++;
				//cout<<it->first*it->second<<" ";
			}
    	}
		cout<<sum<<endl;

	}
}
