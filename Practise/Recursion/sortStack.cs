class Solution {
    
    public void insert(Stack<int> st, int element){
        if(st.Count == 0 || st.Peek() < element){
            st.Push(element);
            return;
        }
        int temp = st.Pop();
        insert(st,element);
        st.Push(temp);
    }
    
    public void sortStack(Stack<int> st) {
        if(st.Count == 0){
            return;
        }
        int temp = st.Pop();
        sortStack(st);
        insert(st,temp);
    }
};
