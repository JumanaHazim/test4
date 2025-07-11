class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty())
        return 0;
        int maxsum =nums[0];
        int currenttotal=nums [0];
        for (size_t i = 1; i < nums.size(); ++i){
        currenttotal = max(nums[i], currenttotal + nums[i]);
                maxsum = max(maxsum, currenttotal);
    }

        
      return maxsum;  
    }
};