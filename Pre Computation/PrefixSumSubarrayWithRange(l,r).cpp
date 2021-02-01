
Q1:Given an array Arr[N]  and query ‘Q’ with left and right range.find sum of the sub array.
Ex: 
Arr={1,2,-1,3,4,5}
Q={{1,4},{2,3},{0,4}}
ANS:
8
2
9


BrutForce Approach:
Complexity:O(N^2)


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sumOfSubArray(int l,int r,vector<int>arr){
    int sum=0;
    for(l;l<=r;l++){
      sum+=arr[l];
    }
    return sum;
}
int main() {
    vector<int>arr={1,2,-1,3,4,5};
    vector<vector<int>>query={{1,4},{2,3},{0,4}};
  for(int i=0;i<query.size();i++){
      cout<<sumOfSubArray(query[i][0],query[i][1],arr)<<endl;
  }
}


Optimal Approach:O(N) using Pre Computation -Prefix Sum
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr={1,2,-1,3,4,5};
    vector<int>pc;
    vector<vector<int>>query={{1,4},{2,3},{0,4},{0,5},{5,5}};
    int pcSum=0;
    for(int i=0;i<arr.size();i++){
      pcSum+=arr[i];
      pc.push_back(pcSum);
    }
     for(int i=0;i<pc.size();i++){
      cout<<pc[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<query.size();i++){
        if(query[i][0]==0){
            cout<<pc[query[i][1]]<<endl;
        }else{
        cout<<pc[query[i][1]]-pc[query[i][0]-1]<<endl;
        }
    }
}

