class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n = nums.size();

        for(int i=0;i<n;i++){
            int required = target - nums[i];
            if(m.find(required) != m.end()){
                return {i,m[required]};
            }
            m[nums[i]]=i;
        }

        return {};
    }
};