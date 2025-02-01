class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> subset;
        newSubset(nums, 0, subset, result);
        return result;
    }
    void newSubset(vector<int>& nums, int i, vector<int>& sub,
                   vector<vector<int>>& res) {
        if (i == nums.size()) {
            res.push_back(sub);
            return;
        }
        sub.push_back(nums[i]);
        newSubset(nums, i + 1, sub, res);
        sub.pop_back();
        i = i + 1;
        while (i < nums.size() && (nums[i] == nums[i - 1])) {
            i++;
        }
        newSubset(nums, i, sub, res);
    }
};
