/*
Given a set of N jobs where each job i has a deadline and profit associated to it. 
Each job takes 1 unit of time to complete and only one job can be scheduled at a time. 
We earn the profit if and only if the job is completed by its deadline. 
The task is to find the maximum profit and the number of jobs done.
*/

class Solution 
{
    public:
    bool static cmp(Job a,Job b){
        return (a.profit>b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,cmp);
        bool slot[n];
        
        for(int i=0;i<n;i++){
            slot[i] = false;
        }
        
        int result=0,count=0;
        
        for(int i=0;i<n;i++){
            for(int j=min(n, arr[i].dead)-1;j>=0;j--){
                
                if(slot[j]==false){
                    count++;
                    result += arr[i].profit;
                    slot[j]=true;
                    break;
                }
            }
        }
        
        vector<int> out;
        out.push_back(count);
        out.push_back(result);
        return out;
    } 
};
