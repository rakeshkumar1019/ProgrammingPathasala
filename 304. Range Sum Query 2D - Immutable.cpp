//space O(n*m)
//time O(n*m)

class NumMatrix {
public:
    vector<vector<int>>mat;
    NumMatrix(vector<vector<int>>& matrix) {
       mat=matrix;
       int n=matrix.size();
       int m=matrix[0].size();
       //row prifix sum
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                mat[i][j]+=mat[i][j-1];
            }
        }
        //column prifix sum
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                mat[j][i]+=mat[j-1][i];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int left=0,right=0,both=0;
        if(col1!=0) left=mat[row2][col1-1];
        if(row1!=0) right=mat[row1-1][col2];
        if(row1!=0 && col1!=0) both=mat[row1-1][col1-1];
        
        return mat[row2][col2]-left-right+both;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
