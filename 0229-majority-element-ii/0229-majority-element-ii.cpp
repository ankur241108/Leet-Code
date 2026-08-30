class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int n = nums.size();
        int mini=n/3+1;
        vector<int>ans;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;

            if(mpp[nums[i]]==mini){
              ans.push_back(nums[i]);
            }
              if(ans.size()==2){
            break;
        }
        }
        return ans;
      
    }
};