class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    set<vector<int>> temp;
    int i;
    for(i = 0; i<nums.size(); i++){
        int j = i + 1, k = nums.size() - 1;
            while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0) {
                temp.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            } else if (sum > 0) {
                k--;
            } else if (sum < 0) {
                j++;
            }
        }
    }
    for (auto triples : temp) {
       ans.push_back(triples);
    }
        return ans;
    }
};
