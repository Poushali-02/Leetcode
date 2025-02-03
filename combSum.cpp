class Solution {
public:
    set<vector<int>> s;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> combination;
         comb(res, combination, 0, target, candidates);
        return res;
    }
    void comb(vector<vector<int>>& res, vector<int>& combination, int i, int target, vector<int>&candidates){
        if(i == candidates.size() || target < 0){//base case
            return;
        }
        if(target == 0){
            if(s.find(combination) == s.end()){
                res.push_back(combination);
                s.insert(combination);
                return;
            }
        }
        combination.push_back(candidates[i]);
        comb(res, combination, i+1, target-candidates[i], candidates);
        comb(res, combination, i, target-candidates[i], candidates);
        combination.pop_back();
        comb(res, combination, i+1, target, candidates);
    }
};
