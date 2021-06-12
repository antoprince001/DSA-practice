class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        int n = x.length();
        for(int i=0;i<n;i++){
            if(x[i]=='(' || x[i]=='{' || x[i]=='['){
                s.push(x[i]);
            }
            else if(x[i]==')' || x[i]=='}' || x[i]==']' ){
                if(s.empty()){
                    return false;
                }
                if(x[i]==')' && s.top()=='(' )
                    s.pop();
                else  if(x[i]==']' && s.top()=='[' )
                    s.pop();
                else  if(x[i]=='}' && s.top()=='{' )
                    s.pop();
                else
                    return false;
            }
        }
        return s.empty();
    }

};
