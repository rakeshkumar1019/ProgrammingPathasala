//time O(n)
//space O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        if(n==0 && m==0) return false;
        int i=0,j=m-1;
        while(i<n && j>=0){
            if(matrix[i][j]==target) return true;
            if(matrix[i][j]<target) i++;
            else j--; 
        }
        return false;
    }
};
