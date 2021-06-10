/*
Given a string in roman no format (s)  your task is to convert it to an integer 
*/
int romanToDecimal(string &str) {
    
    int sum=0,a,b;
    unordered_map<char,int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;
    
    int N = str.length();
    
    for (int i = 0; i < N; i++) {
        a = roman[str[i]];
        if( i+1 < N){
            b = roman[str[i+1]];
            
            if(a>=b){
               sum += a; 
            }
            else{
                sum += b-a;
                i++;
            }
        }
        else{
          sum += a;  
        }
    }
    return sum;
}
