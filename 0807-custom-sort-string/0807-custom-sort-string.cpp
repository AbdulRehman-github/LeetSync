class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> priority;
        for(int i = 0; i < order.size(); i++){
            priority[order[i]] = i;
        }

        sort(s.begin(), s.end(), [&](char a, char b){
         return priority[a] < priority[b];
        });
          return s;
    }
};