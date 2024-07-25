class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
          int n = matrix.size();
    vector<int> sortedElements;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            sortedElements.push_back(matrix[i][j]);
        }
    }
    sort(sortedElements.begin(), sortedElements.end());

         return  sortedElements[k - 1];
    }
};