class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1, mid;
        while (st <= end) {
            mid = st + ((end - st) / 2);
            if (nums.at(mid) == target)
                return mid;
            if (nums.at(st) <= nums.at(mid)) { // left half is sorted
                if (nums.at(st) <= target &&
                    target <= nums.at(mid)) // bs on left half
                    end = mid - 1;
                else
                    st = mid + 1;
            }
            else { // right half is sorted
                if (nums.at(mid) <= target &&
                    target <= nums.at(end)) // bs on right half
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }
};
