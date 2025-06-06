// Last updated: 4/22/2025, 4:06:00 AM
class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int res = 0, n = nums.size();
        
        for (int i = 0; i < n; i++)
            for (int j = i+1; j < n; j++)
                for (int k = j+1; k < n; k++)
                    for (int l = k+1; l < n; l++)
                        if (nums[i] + nums[j] + nums[k] == nums[l]) res++;

        return res;
    }
};