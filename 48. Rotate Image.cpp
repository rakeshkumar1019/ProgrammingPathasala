//time O(n^2)
//space O(1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.size()<=1)return;
       for(int i=0;i<matrix.size();i++){
           for(int j=0;j<i;j++){
               int temp=matrix[i][j];
               matrix[i][j]=matrix[j][i];
               matrix[j][i]=temp;
           }
           
       }
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        return;
    }
};
