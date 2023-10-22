class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int totalElements=m * n;
        int startingRow=0;
        int endingColumn=n-1;
        int endingRow=m-1;
        int startingColumn=0;
        int count=0;
        vector<int>ans;
        while(count<totalElements){
            //starting row
            for(int i=startingColumn; i<=endingColumn && count<totalElements; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            //ending column
            for(int i=startingRow; i<=endingRow && count<totalElements; i++){
                ans.push_back(matrix[i][endingColumn]);
                count++;
            }
            endingColumn--;
            //ending row
            for(int i=endingColumn; i>=startingColumn && count<totalElements; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            //starting column
            for(int i=endingRow; i>=startingRow && count<totalElements; i--){
                ans.push_back(matrix[i][startingColumn]);
                count++;
            }
            startingColumn++;
        }
        return ans;
    }
};