class Solution {
public:
  int sumOddLengthSubarrays(vector<int>& arr) {
    int n = arr.size();
    int totalSum = 0;

    for (int i = 0; i < n; ++i) {
       
        int end = i + 1;
        int start = n - i;

        int totalSubarrays = start * end;

        int oddSubarrays = (totalSubarrays + 1) / 2;
        totalSum += oddSubarrays * arr[i];
    }

    return totalSum;
}
};