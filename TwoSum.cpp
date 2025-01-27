class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        while (i < nums.size()) {
            int j = i + 1; //traverse for all elements
            while (j < nums.size()) {
                if ((nums.at(i) + nums.at(j)) == target) {
                    return {i, j}; //return the vector
                } else j++; //check for all j
            }
            i++;
        }
        return {};
    }
};
