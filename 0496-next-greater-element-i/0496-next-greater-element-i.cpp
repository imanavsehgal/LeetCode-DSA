class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> st;
        unordered_map<int,int> map;

        for(int num : nums2){
            while(!st.empty() && st.top()<num){
                map[st.top()]=num;
                st.pop();
            }
            st.push(num);
        }
        while(!st.empty()){
            map[st.top()]=-1;
            st.pop();
        }

        for(int num:nums1){
            ans.push_back(map[num]);
        }

        return ans;

    }
};