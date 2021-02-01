https://leetcode.com/problems/max-chunks-to-make-sorted/


class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int preMax=arr[0];
        int noChucks=0;
        for(int i=0;i<arr.size();i++){
            preMax=max(preMax,arr[i]);
            if(preMax==i){
                noChucks++;
            }
        }
        return noChucks;
    }
};
