class Solution {
public:
    int maxArea(vector<int>& nums) {
        int j=nums.size()-1;
        int i=0;
        int area=INT_MIN;

        while(i<j){
            area=max(area, min(nums[i],nums[j])*(j-i));
            if(nums[i]<nums[j]){
                i++;
            }else{
                j--;
            }
        }

        return area;
    }
};