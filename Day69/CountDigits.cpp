/* You are given a string S. Count the number of occurrences of all the digits in the string S.  */
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {
	string s;
	int count[10];
	memset(count,0,sizeof(count));
	cin>>s;
	int len = s.length();

	for(int i=0;i<len;i++){
		switch(s[i]){
			case '0':
				count[0]++;
				break;
			case '1':
				count[1]++;
				break;
			case '2':
				count[2]++;
				break;
			case '3':
				count[3]++;
				break;
			case '4':
				count[4]++;
				break;
			case '5':
				count[5]++;
				break;
			case '6':
				count[6]++;
				break;
			case '7':
				count[7]++;
				break;
			case '8':
				count[8]++;
				break;
			case '9':
				count[9]++;
				break;
		}
	}
	for(int i=0;i<10;i++){
		cout<<i<<" "<<count[i]<<endl;
	}
	return 0;
}
