class Solution {
public:
    vector<int> ans;
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++)
            for(int j=0; j<nums.size(); j++)
            {
                if(nums[i]+nums[j]==target && i!=j)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        return ans;
    }
};

