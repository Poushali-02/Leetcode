class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> product(nums.size(),1);
        //prefix
        for(int i=1; i<nums.size(); i++){
            product[i] = (product.at(i-1)*nums.at(i-1));
        }
        //suffix
        int suffix = 1;
        for(int i=nums.size()-2; i>=0; i--){
            suffix *= nums[i+1];
            product[i] *= suffix;
        } return product;
    } 
};
