class Solution { 
public: 
    int findDuplicate(vector<int>& nums){
    for(int num:nums){ //for each loop
        int idx = abs(num);
        if(nums[idx]<0){
            return idx; //finging duplicate
        } nums[idx] = -nums[idx]; //creating stamp
    }
     return 0;
    }
};
