//time O(n)
//space O(1)

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	      int j=m-1;
	      int i=0;
	      while(i<n && j>=0){
	          if(arr[i][j]==1) j--;
	          else i++;
	      }
	      j=j+1;
	      if(j==m)return -1;
	   //   cout<<i<<" "<<j<<endl;
	      for(int k=0;k<n;k++){
	          
	          if(j>=0 && arr[k][j]==1) {
	           //   cout<<arr[k][j]<<endl; 
	              return k;
	          }
	          
	      }
	      return -1;
	}

};
