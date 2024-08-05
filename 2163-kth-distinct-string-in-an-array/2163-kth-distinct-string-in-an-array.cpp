class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> countMap;
        vector<string> distinctOrder;

        for( auto& str : arr){
            countMap[str]++;
        }

        for( auto& str : arr){
           if(countMap[str] == 1){
            distinctOrder.push_back(str);
           }
        }
         
          if(k <= distinctOrder.size()){
            return distinctOrder[k - 1];
          }
          else{
            return "";
          }
}   
};