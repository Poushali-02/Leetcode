class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end()); //sort the vector
        vector<vector<int>> ans; //create new vector
        for(int i=0; i<intervals.size(); i++){
            if(ans.empty()||ans.back()[1]<intervals[i][0]){
                ans.push_back(intervals[i]); //update new vector
            } else{
                ans.back()[1]=max(ans.back()[1], intervals[i][1]);
            }
        } return ans;
    } 
};
