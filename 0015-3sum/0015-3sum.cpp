class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int k=nums.size();
        int i,j;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
       for(int i=0;i<k-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            j=i+1;
            int n=k-1;

             while(j<n){
                int sum = nums[i]+nums[j]+nums[n];
            if(sum==0){
            ans.push_back({nums[i],nums[j],nums[n]});
                j++,n--;

                while(j<n && nums[j]==nums[j-1]) j++;
                while(j<n && nums[n]==nums[n+1]) n--;
            }else if(nums[i]+nums[j]+nums[n]<0){
                j++;
            }else{
                n--;
            }
       }
        }

         return ans;
       }

      
    
};