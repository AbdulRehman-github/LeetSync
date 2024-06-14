class Solution {
public:
    bool isPowerOfThree(int num) {
        if (num <= 0) return false;
        while (num > 1) {
            if (num % 3 != 0) return false;
            num /= 3;
        }
        return true;
    }
};
