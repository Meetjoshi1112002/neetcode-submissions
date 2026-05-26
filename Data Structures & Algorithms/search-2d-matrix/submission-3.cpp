class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int tar) {
        // Helper function to find the correct row
        auto finderRow = [&matrix, &tar](int s , int e )->int{
            int mid;
            while(s <= e) {
                mid = s + (e - s) / 2;
                if(matrix[mid][0] == tar) return mid;
                else if(matrix[mid][0] > tar) e = mid - 1;
                else s = mid + 1;
            }
            return e; // Return the last valid row where matrix[e][0] < tar
        };
        
        // Helper function to find the correct column in the given row
        auto finderCol = [&matrix, &tar](int s, int e, int row)->int{
            int mid;
            while(s <= e) {
                mid = s + (e - s) / 2;
                if(matrix[row][mid] == tar) return mid;
                else if(matrix[row][mid] > tar) e = mid - 1;
                else s = mid + 1;
            }
            return -1; // If not found, return -1
        };
        
        int row = finderRow(0, matrix.size() - 1);
        if(row < 0) return false; // If the row is invalid, return false
        
        // Perform binary search on the identified row
        int col = finderCol(0, matrix[row].size() - 1, row);
        if(col == -1) return false; // If the column is invalid, return false
        
        return matrix[row][col] == tar; // Return the final result of the check
    }
};
