class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>numToStr;
        // converting numbers to string 
        for(int num : nums){
            numToStr.push_back(to_string(num));
        }

        sort(numToStr.begin(), numToStr.end(), [](string x, string y){
             return x + y > y + x; 
        });
        
           string result;
        for(string str : numToStr ){
           result += str;
        }

        if(result[0] == '0' )  return "0";
        return result;
    }
};