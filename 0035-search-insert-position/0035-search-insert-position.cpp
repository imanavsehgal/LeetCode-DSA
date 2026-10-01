class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int end = nums.size();
        int start = 0;
        int mid;

        while(start<end){
           mid =start + (end-start)/2;
            if(target == nums[mid]){
                return mid;
            }else if(target<nums[mid]){
                end=mid;
            }else{
                start=mid+1;
            }
        }

        return start;
        
    }
};