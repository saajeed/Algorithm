class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();
        int rowIndex = 0;
        int columnIndex = column -1 ;
        while(rowIndex<row && columnIndex>=0)
        {
            int el = matrix[rowIndex][columnIndex];
            if(el==target)
                return true;
            if(el<target)
                rowIndex++;
            else
                columnIndex--;
                
        }
        return false;
    }
};
