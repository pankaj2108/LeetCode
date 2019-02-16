int lengthOfLongestSubstring(string s) {
        vector<int>vect(256,-1);
        int maxlen=0,start=-1;
        for(int i=0;i<s.length();i++){
            if(vect[s[i]]>start){
                start=vect[s[i]];
            }
            maxlen=max(maxlen,i-start);
            vect[s[i]]=i;
        }
        return maxlen;
    }
