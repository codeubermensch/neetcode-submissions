class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        vector<vector<int>> sorted;
        sorted.push_back({nums[0]});

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == nums[i-1]) {
                continue;
            }
            else if(nums[i] == nums[i-1] + 1) {
                sorted.back().push_back(nums[i]);
            }
            else {
                sorted.push_back({nums[i]});
            }
        }

        int m = 0;

        for(int i = 0; i < sorted.size(); i++) {
            m = max(m, (int)sorted[i].size());
        }

        return m;
    }
};