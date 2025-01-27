class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN; //Kadane's Algorithm
    int currSum = 0;
    for(int st = 0; st < nums.size(); st++){
            currSum += nums.at(st);
            maxSum = max(currSum, maxSum);
            if(currSum < 0) currSum = 0; //reset for negative value
    } return maxSum;
    }
};
