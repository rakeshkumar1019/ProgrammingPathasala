//time o(n)
//space 0(1)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int trap(vector<int>height){
    int height_length=height.size();
    if(height_length<=2)return 0;
    int left_max=height[0];
    int right_max=height[height_length-1];
    int current_left_height=1,current_right_hight=height_length-2;
    int water=0;
    
    while(current_left_height<=current_right_hight){
        if(left_max<=right_max){
            //left direction
            if(height[current_left_height]<=left_max){
                water+=left_max-height[current_left_height];
            }else{
                left_max=height[current_left_height];
            }
            current_left_height++;
        }else{
            if(height[current_right_hight]<=right_max){
                water+=right_max-height[current_right_hight];
            }else{
                right_max=height[current_right_hight];
            }
            current_right_hight--;
        }
    }
    return water;
}
int main(){
    int n;
    cin>>n;
    vector<int>height(n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    cout<<trap(height)<<endl; 
}
