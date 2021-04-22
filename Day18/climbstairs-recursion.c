/* You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top? */


int climbStairs(int n){
    
    int flag = 0;
    if(n<=0){
        return 0;
    }
    else if(n==1){
        return 1;
        
    }
    else if(n==2){
        return 2;
    }
    else if(n==3){
        return 3;
    }
    else{
        if(n-1 > 0)
        flag += climbStairs(n-1);
            
        if(n-2 > 0)
        flag += climbStairs(n-2);
        
        return flag;
    }
}
