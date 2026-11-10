class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> soln;

        for(int i=0; i< nums.size(); i++){

            soln[nums[i]]++;
        }

        vector<pair<int, int>> sol;

        for(auto &[key,count] : soln ){

           sol.push_back({count,key});   
        }

        sort(sol.rbegin(), sol.rend());

        vector<int> res;

        for(int i=0; i<k; i++){
           
           res.push_back(sol[i].second);

        }

        return res;
        
    }
};
