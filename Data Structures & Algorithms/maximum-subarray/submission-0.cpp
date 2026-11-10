class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n = nums.size();
        // int maxiSum = nums[0];
        // int sum = nums[0];

        int maxiSum = INT_MIN;
        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            sum += nums[i];

            if(sum > maxiSum) maxiSum = sum;
            if(sum < 0) sum = 0;
        }

        return maxiSum;

    }
};
