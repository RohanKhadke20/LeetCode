class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int g=x;
        long long rn=0;
        while(x != 0){
            int d=x%10;
            rn=(rn*10)+d;
            x=x/10;
        }
        return g==rn;
    }
};