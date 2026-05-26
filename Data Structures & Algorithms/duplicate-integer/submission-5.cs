public class Solution {
    public bool hasDuplicate(int[] nums) {
        // If XOR is zero then yes contains duplication
        HashSet<int> st = new();
        foreach(int i in nums){
            if(st.Contains(i))
                return true;
            st.Add(i);
        }
        return false;
    }
}