class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=1, end = arr.size()-2;
        while(st<=end){
            int mid = st+((end-st)/2);
            if(arr.at(mid-1) < arr.at(mid) && arr.at(mid) > arr.at(mid+1)) //peak condition
                return mid;
            if(arr.at(mid-1) < arr.at(mid)) // increasing...
                st = mid + 1; //right side
            else end = mid - 1; //left side decreasing...
        } return -1;
    }
};
