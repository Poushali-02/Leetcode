class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0, h = 0;
        int lp = 0, rp = height.size() - 1; //two pointer approach
        while (lp < rp) {
            h = min(height.at(lp), height.at(rp));
            area = max((rp - lp) * h, area);
            if (height.at(lp) < height.at(rp))
                lp++;
            else
                rp--;
        }
        return area;
    }
};
