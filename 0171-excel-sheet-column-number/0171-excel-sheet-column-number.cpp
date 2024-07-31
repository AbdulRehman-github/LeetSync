class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;

        for(char c : columnTitle){
          char  value = c - 'A' + 1;
            result = result * 26 + value;
        }
        return result;
    }
};