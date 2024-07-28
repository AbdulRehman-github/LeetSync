class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> averages;
        int n = nums.size();

        sort(nums.begin(), nums.end());

       int minElement = 0;
        int maxElement = n - 1;

        for(int i = 0; i < n/2; i++){
            double avg = (nums[minElement] + nums[maxElement]) / 2.0;
            averages.push_back(avg);
            minElement++;
            maxElement--;
        }

        sort(averages.begin(), averages.end());
        return averages[0];
    }
};