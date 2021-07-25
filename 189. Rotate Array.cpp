//time O(n)
//space O(1)


#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
vector<int> rotate(vector<int> nums,int k){
   int n=nums.size();
   if(n<=0)return ;
    k=k%n;;
    reverse(nums.begin(),nums.end()-k);
    reverse(nums.end()-k,nums.end());
    reverse(nums.begin(),nums.end());
    return; 
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>res=rotate(nums,k);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    
}
