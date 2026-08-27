class Solution {
    
    private void delMid(Stack<int> s, int target){
        if(s.Count == target){
            s.Pop();
            return;
        }
        int temp = s.Pop();
        delMid(s,target);
        s.Push(temp);
    }
    public void deleteMid(Stack<int> s) {
        // code here
        int target = (int)Math.Ceiling((double)s.Count/2);
        delMid(s,target);
    }
}