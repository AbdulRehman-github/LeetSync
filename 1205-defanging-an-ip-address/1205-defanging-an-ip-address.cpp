class Solution {
public:
    string defangIPaddr(string address) {
        string open = "[";
        string close = "]";

        for(int i = 0; i < address.size(); i++){
            if(address[i] == '.'){
                address.insert(i, open);
                i++;

                address.insert(i + 1, close);
            }
        }
        return address;
    }
};