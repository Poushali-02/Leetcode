class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        createSubset(nums, 0, res, subset);
        return res;
    }
    void createSubset(vector<int>&nums, int i, vector<vector<int>> &res, vector<int> subset){
        if(i == nums.size()){
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        createSubset(nums, i+1, res, subset);
        subset.pop_back();
        createSubset(nums, i+1, res, subset);
    }
};
