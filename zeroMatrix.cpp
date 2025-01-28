class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> arr = matrix;
        for(int i=0; i<arr.size(); i++){//row
            for(int j=0; j<arr[0].size(); j++){//column
                if(arr[i][j] == 0) {
                    for(int k=0; k<arr[i].size(); k++){
                        matrix[i][k] = 0;
                    }
                    for(int k=0; k<arr.size(); k++){
                        matrix[k][j] = 0;
                    }
                }
            }
        }
    }
};
