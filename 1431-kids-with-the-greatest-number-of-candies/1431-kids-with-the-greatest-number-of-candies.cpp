class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        if(candies.empty()){
            return {};
        }
        int candie = candies.size();
        vector<bool> decision;
        int maxCandies = 0;
        for(int i = 0; i < candie; i++){
            if(candies[i] >= maxCandies) maxCandies = candies[i];
        }
        for(int i = 0; i < candie; i++){
            if(candies[i] + extraCandies >= maxCandies){
                decision.push_back(true);
            } else{
                decision.push_back(false);
            }
        }
        return decision;
    }
};