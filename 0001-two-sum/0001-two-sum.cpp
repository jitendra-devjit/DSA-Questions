class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>map;
        
        for(int i=0;i<n;i++) map[nums[i]] = i;

         
        for(int i=0;i<n;i++){
            int req = target - nums[i];
            if(map.count(req) && i!= map[req]){
                return {i,map[req]};
            }
        }
        return {0};
    }
};