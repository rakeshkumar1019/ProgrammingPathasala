#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long int findMaxExpression(vector<long long int>arr,long int n,long int p,long long int q,long long int r){
    
    long long int pMax[n];
    long long int sMax[n];
    pMax[0]=arr[0]*p;
    sMax[n-1]=arr[n-1]*r;
    
    for(int i=1;i<n;i++){
        long long int temp=arr[i]*p;
        pMax[i]=max(temp,pMax[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        long long int temp=arr[i]*r;
        sMax[i]=max(temp,sMax[i+1]);
    }
     
    long long int res=LLONG_MIN;
    for(int i=0;i<n;i++){
        long long int expression =((pMax[i])+(arr[i]*q)+(sMax[i]));
        res=max(expression,res);
    }
    return res;
}
 
int main()
{
    long long int n,p,q,r;
    cin>>n>>p>>q>>r;
    vector<long long int>arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<findMaxExpression(arr,n,p,q,r)<<endl;
}
