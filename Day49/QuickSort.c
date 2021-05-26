void quickSort(int arr[], int low, int high)
{
    // code here
    if(low<high){
        
        int pi = partition(arr,low,high);
        
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
    
int partition (int arr[], int low, int high)
{
   // Your code here
   int temp;
   int pivot = arr[high];
   
   int i = low-1;
   for(int j=low;j<=high;j++){
       if(arr[j]<pivot){
           i++;
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
       }
   }
   
   temp = arr[i+1];
   arr[i+1] = arr[high];
   arr[high] = temp;
   
   return i+1;
}
