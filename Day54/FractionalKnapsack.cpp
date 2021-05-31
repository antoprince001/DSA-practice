struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    bool static cmp(struct Item a, struct Item b)
    {
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        double cost = 0.0;
        Item temp;
        
        sort(arr,arr+n,cmp);
        int i=0;
        int current=0;
        for(int i=0;i<n;i++){
            if((current + arr[i].weight) <= W){
                cost += arr[i].value;
                current += arr[i].weight;
            }
            else{
                int remain = W - current;
                cost += arr[i].value * ((double) remain / arr[i].weight);
                break;
            }
        }
        return cost;
    }
        
};

