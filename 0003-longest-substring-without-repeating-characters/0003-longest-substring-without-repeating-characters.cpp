class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> l(256,-1);
        int max=0;
        int left=0;
        for(int right=0;right<s.length();++right){
            char curr = s[right];
            if(l[curr]>=left){
                left = l[curr]+1;
            }
            l[curr]=right;
            max=std::max(max,right-left+1);
        }
        return max;
    }
};