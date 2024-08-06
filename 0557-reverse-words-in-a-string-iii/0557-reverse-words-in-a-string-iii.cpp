class Solution {
public:
    string reverseWords(string s) {
        string result;
        int start = 0;
        int n = s.length();
        
        while (start < n) {
          
            while (start < n && s[start] == ' ') {
                result += s[start];
                ++start;
            }
            
           
            int end = start;
            while (end < n && s[end] != ' ') {
                ++end;
            }
            
           
            for (int i = end - 1; i >= start; --i) {
                result += s[i];
            }
           
            start = end;
        }
        
        return result;
    }
};
