class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int c0 = 0;
        int c1 = 0;
        int c2 = 0;
        for (int i = 0; i < n; i++) {//i=0 i=1 i=2 i=3 i=4 i=5
            if (nums.at(i) == 0)
                c0++;//c0=1 2
            if (nums.at(i) == 1)
                c1++;//c1=1 2
            if (nums.at(i) == 2)
                c2++;//c2=1 2
        }
        c1 += c0;
        c2 += c1;
        for (int i = 0; i < c0; i++) {
            nums.at(i) = 0;
        }
        for (int j = c0; j < c1; j++) {
            nums.at(j) = 1;
        }
        for (int k = c1; k < c2; k++) {
            nums.at(k) = 2;
        }
    }
};
