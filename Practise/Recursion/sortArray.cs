class Solution {
    
    private void sortarrutil(int[] arr,int s){
        if(s == 0)
            return; // the array is sorted 
            
        sortarrutil(arr,s-1);
        
        // Now array of size s - 1 is sorted we need to just insert the arr[s] at correct position
        if(s < arr.Length)
            insert(arr,s,arr[s]);
    }
    
    private void insert(int[] arr, int s, int ele){
        // Here 2 base condition 
        if (s == 0 || arr[s-1] <= ele){
            arr[s] = ele;
            return;
        }
        arr[s] = arr[s-1];
        insert(arr,s-1,ele);
    }
    public void sortArr(int[] arr) {
        // code here
        sortarrutil(arr,arr.Length);
        
    }
}
