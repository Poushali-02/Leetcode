class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> newV(0,0);
        int i=0, j=numbers.size()-1;
        while(i<numbers.size() && j>0){
            if((numbers.at(i) + numbers.at(j)) > target) j--;
            if((numbers.at(i) + numbers.at(j)) < target) i++;
            if((numbers.at(i) + numbers.at(j)) == target){
                newV.push_back(i+1);
                newV.push_back(j+1);
                return newV;
            }
        } return newV;
    }
};
