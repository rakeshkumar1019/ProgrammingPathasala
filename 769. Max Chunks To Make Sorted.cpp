//time-O(n)
//space -O(1)

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int length=arr.size();
        if(length<=1)return length;
        int max_element=arr[0];
        int count=0;
        for(int i=0;i<length;i++){
             max_element=max(max_element,arr[i]);
            if(max_element==i){
                count++;
            }
           
        }
        return count;
    }
};
