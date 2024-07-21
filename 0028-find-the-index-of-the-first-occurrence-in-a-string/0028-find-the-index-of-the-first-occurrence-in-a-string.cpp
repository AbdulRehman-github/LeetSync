class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()){
            return 0;
        }

        int needleLen = needle.size();
        int haystackLen = haystack.size();

        for(int i = 0; i <= haystackLen - needleLen; ++i){
            if(haystack.substr(i,needleLen) == needle){
                return i;
            }
        }
        return -1;
    }
};