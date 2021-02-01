Q:Given array and Index.find max element from range array [0-index] and return
Ex:
array[1,2,-1,13,45,10]
ind=3
ind=5
find max element form array[0-3] i.e= 13
find max element form array[0-5] i.e= 45


Optimal Solution:complexity O(n)
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr={1,2,-1,3,4,5};
    vector<int>pM;
    pM.push_back(arr[0]);
    for(int i=1;i<arr.size();i++){
      pM.push_back(max(pM[i-1],arr[i]));
    }
    for(int i=0;i<pM.size();i++){
        cout<<pM[i]<<" ";
    }
}
