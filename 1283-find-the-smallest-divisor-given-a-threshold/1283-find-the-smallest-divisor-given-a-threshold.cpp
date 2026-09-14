class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high=*max_element(nums.begin(),nums.end());
        int low=1;
       
        int ans=threshold;
        int n=nums.size();

        if(n==threshold ){
            return high;
        }

        

        while(low<=high){
             long long result=0;
            int mid=low+(high-low)/2;
            for(int i=0;i<nums.size();i++){
                  result += (nums[i] + mid - 1) / mid;
            }

            if(result<=threshold){
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