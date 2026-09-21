class Solution {
public:

    bool minsum(vector<int>&nums,long long mid,int n,int k){
        long long sum=0;
        int count=1;
        for(int i=0;i<n;i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }
            else{
                count++;
                sum=nums[i];
            }
        }

        if(count<=k){
           return true;
        }

        else{
             return false;
        }

    }

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        long long ans=0;
        long long low=*max_element(nums.begin(),nums.end());
        long long high=0;
        for(int i=0;i<n;i++){
                high+=nums[i];
        }

        while(low<=high){
            long long mid=low+(high-low)/2;
            if(minsum(nums,mid,n,k)){
                ans=mid;
                high=mid-1;   
            }

            else{
                low=mid+1;
            }
        }
        return ans;
    }
};