Q:arr[1,2,3,4,5]
maximize the expressionn using any three elements
ex:p*arr[i]+q*arr[j]+r*arr[k]
find arr[i],arr[j],arr[k]

Ex:p=1,q=2,r=3 i,j,k=3,4,5

so p*3+2*4+3*5=26


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,5};
    int n=5;
    int p=1,q=2,r=3;
    int leftMax[n];leftMax[0]=arr[0];
    int rightMax[n];rightMax[n-1]=arr[n-1];

    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],arr[i]);
    }
    int maxRes=INT_MIN;
    for(int i=1;i<n-1;i++){
        maxRes=max(maxRes,p*leftMax[i-1]+q*arr[i]+r*rightMax[i+1]);
    }
   cout<<maxRes;
}
