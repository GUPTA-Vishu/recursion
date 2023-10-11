

class Solution {
    void solve(vector<vector<int>>& ans, vector<int>& result, int target, int index, vector<int>& candidates) {
        // Base case
        if (target == 0) {
            ans.push_back(result);
            return;
        }

        // Ensure the recursion doesn't go too deep
        if (target < 0 || index == candidates.size()) {
            return;
        }

        // Exclude current candidate
        solve(ans, result, target, index + 1, candidates);

        // Include current candidate
        if (candidates[index] <= target) {
            result.push_back(candidates[index]);
            solve(ans, result, target - candidates[index], index, candidates);
            result.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> result;
        int index = 0;
        solve(ans, result, target, index, candidates);
        return ans;
    }
};
