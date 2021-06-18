/*
Mr. ABC was recently learning about computer division. Considering the basic model of the computer suppose we wish to divide a number X by D i.e X/D and 
obtain the result (Note that it is integer division i.e result of 7/2 will be 3).

Now the computer will give the divide overflow error if:

The number of bits in the binary representation(without appending any leading zeroes) of the resulting number(quotient) is greater than the 
number of bits in the binary representation of divisor(D) (Without appending any leading zeroes).

Now Mr. ABC is given an integer X for T testcases .He wishes to find number of such divisors D(1<=D<=X) for which divide overflow will not occur.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long int T,X,sol;

	cin>>T;
	for(long long int j=0;j<T;j++){
		
		cin>>X;
		sol = 0;
		int i=1;
		while(i<sqrt(X)){
			i=i*2;
			if(X/i >= i/2){
				sol = X-X/i;
			}
			else{
				sol = (X-(i/2)+1);
			}
		}
		cout<<sol<<endl;
	}
	return 0;
}
