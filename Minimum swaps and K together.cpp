//time O(n)
//space O(1)

int minSwap(int *arr, int n, int k) {
    if(n<=1)return 0;
    int window=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k) window++;
    }

    int minSwap=0;
    int windowCount=0;
    for(int i=0;i<window;i++){
        if(arr[i]>k)windowCount++;
    }
     
    minSwap=windowCount;
    for(int i=window;i<n;i++){
        if(arr[i-window]>k){ windowCount--;}
        if(arr[i]>k){ windowCount++;}
        minSwap=min(minSwap,windowCount);
    }
    return minSwap;
}
