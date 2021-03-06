void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return (s.size()==n);
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.empty();
}

int pop(stack<int>& s){
	// Your code goes here
	if(!s.empty()){
	    int a=s.top();
	    s.pop();
	    return a;
	    
	}
	 else
	    return -1;
}

int getMin(stack<int>& s){
	// Your code goes here
	stack<int> temp=s;
	int min = temp.top();
	
	while(!temp.empty()){
	    if(min>temp.top()){
	        min=temp.top();
	    }
	    temp.pop();
	}
	return min;
}
