class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        for(auto ch:s){
            if( !ans.empty() && ch == ans.back()){
                ans.pop_back();
            } else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};