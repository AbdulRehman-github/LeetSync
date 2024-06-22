class Solution {
public:
    int longestValidParentheses(string s) {
       stack<int> t;
        t.push(-1);
        int maxim = 0;
        for(int i =0; i < (int)s.size(); i++){
         if(s[i] ==  '(') {
             t.push(i);
         }
            else{
                t.pop();
                if(t.empty())
                    t.push(i);
                else
                    maxim = max(maxim, i - t.top());        
            }
        }
             return maxim;
    }
};