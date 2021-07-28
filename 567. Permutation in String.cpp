//time O(m*26)
//space O(26)

class Solution {
public:
    bool checkFreq(vector<int>a,vector<int>b){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        
        int n=s1.size();
        int m=s2.size();
        if(n>m)return false;
         vector<int>s1_freq(26,0);
         vector<int>s2_freq(26,0);
        for(int i=0;i<26;i++){
            s1_freq[i]=0;
            s2_freq[i]=0;
        }
         //s1 store frequency
        for(int i=0;i<n;i++){
            s1_freq[s1[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            s2_freq[s2[i]-'a']++;
        }
        if(checkFreq(s1_freq,s2_freq)) return true;
        for(int i=n;i<m;i++){
            s2_freq[s2[i-n]-'a']--;
            s2_freq[s2[i]-'a']++;  
            if(checkFreq(s1_freq,s2_freq)) return true;
        }
        return false;  
    }
};
