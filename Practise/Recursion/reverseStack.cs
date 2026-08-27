class Solution {
    
    private void insert(Stack<int>st, int tmp){
        if(st.Count == 0){
            st.Push(tmp);
            return;
        }
        int tmpl = st.Pop();
        insert(st,tmp);
        st.Push(tmpl);
    }
    public void reverseStack(Stack<int> st) {
        // code here
        if(st.Count == 0)
            return;
        
        int tmp = st.Pop();
        reverseStack(st);
        insert(st,tmp);
    }
}
