class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
                int first = 0;
        int last = nums.size() -1;
        int mid = floor((first+last)/2);
                if (nums.size() <= 0) {
            return 0;
        }else {
        while ( first <= last  ) {
            mid = floor((first+last)/2);
            cout<<first<<" "<<mid<<" "<<last<<endl;
            if (target == nums[mid]){
                return mid;
            }
            else if ( target > nums[mid]){
                first = mid+1;
            }else{
                last = mid-1;
            }
                    }
        if (target > nums[mid]){
            return first;
        }else {
            return first;
        }
                }
                    }
};