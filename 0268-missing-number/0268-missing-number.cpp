class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int rsum=0;
        for(int i=0;i<n;i++){
                rsum+=nums[i];
        }

        return (sum-rsum);
    }
};