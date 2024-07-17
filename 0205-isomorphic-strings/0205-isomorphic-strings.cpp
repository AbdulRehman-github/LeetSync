class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
           vector<int> mapS(256,-1);
           vector<int> mapT(256,-1);

           for(int i = 0; i < s.length(); ++i){
            char charS = s[i];
            char charT = t[i];

            if(mapS[charS] != -1 && mapS[charS] != charT){
                return false;
            }
             if(mapT[charT] != -1 && mapT[charT] != charS){
                return false;
             }
             mapS[charS] = charT;
             mapT[charT] = charS;
           }
           return true;
        
    }
};