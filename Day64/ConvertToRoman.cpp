/*
Given an integer n, your task is to complete the function convertToRoman which prints the corresponding roman number of n.
I 1
V 5
X 10
L 50
C 100
D 500
M 1000
*/

string convertToRoman(int n) 
{
    int number[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string snumber[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    string out = "";
    int i=12;
    while(n>0){
        int quotient = n/number[i];
        n=n%number[i];
        while(quotient--){
            out = out + snumber[i];
        }
        i--;
    }
    return out;
}
