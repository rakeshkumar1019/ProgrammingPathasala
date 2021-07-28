//time O(n)
//space O(1)
//if question ask do module add modulor opration on the muliplication and sum operator

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sumOfMatrix(vector<vector<int>> arr)
{
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=(i+1)*(j+1)*(n-i)*(n-j)*(arr[i][j]);
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
     
     cout<<sumOfMatrix(arr)<<endl;
    
    
    
    
 }
