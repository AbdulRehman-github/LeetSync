class Solution {
public:
    int calPoints(vector<string>& operations) {
  stack<int> record;
    for (const string& op : operations) {
        if (op == "+") {
            int top = record.top();
            record.pop();
            int newTop = top + record.top();
            record.push(top);
            record.push(newTop);
        } else if (op == "D") {
            record.push(2 * record.top());
        } else if (op == "C") {
            record.pop();
        } else {
            record.push(stoi(op));
        }
    }
    
    int sum = 0;
    while (!record.empty()) {
        sum += record.top();
        record.pop();
    }
    return sum;
}
};