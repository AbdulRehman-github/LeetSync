class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
    int numOfColumns = strs[0].size();
    int numOfRows = strs.size();
    int deletions = 0;
    
    for (int col = 0; col < numOfColumns; ++col) {
        for (int row = 1; row < numOfRows; ++row) {
            if (strs[row][col] < strs[row - 1][col]) {
                ++deletions;
                break;
            }
        }
    }
    
    return deletions;
    }
};