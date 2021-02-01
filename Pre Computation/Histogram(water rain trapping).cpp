https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& height) {
    if(height.size()<=2)return NULL;  
    vector<int>leftMax;leftMax.push_back(height[0]);
    vector<int>rightMax=height;
    for(int i=1;i<height.size();i++){
      leftMax.push_back(max(leftMax[i-1],height[i]));
    }
    for(int i=height.size()-2;i>=0;i--){
      rightMax[i]=max(rightMax[i+1],height[i]);
    }
    int resMax=0;
        int temp;
    for(int i=1;i<height.size()-1;i++){
        temp=min(leftMax[i-1],rightMax[i+1])-height[i];
       if(temp>0){
           resMax+=temp;
       }
    }
      return resMax;     
    }
};
