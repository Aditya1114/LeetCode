class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = 0;
        for (const auto& customer : accounts) {
            int customerWealth = accumulate(customer.begin(), customer.end(), 0);
            wealth = max(wealth, customerWealth);
        }
        return wealth;
    }
};