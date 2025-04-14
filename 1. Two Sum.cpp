class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m; // remaining. index
        for(int i =0;i<nums.size(); i++)
        {
            int remaining = target - nums[i];
            if(m.contains(nums[i]))
            {
                return vector<int> {m[nums[i]], i};
            }
            m.insert({remaining, i});
        }
        return vector<int>{0};
    }
};