class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int index=-1;
         int n=nums.size();

       for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
       }

        if(index==-1){
             int i=index+1;
            int j=n-1;
          while(i<j){
             swap(nums[i],nums[j]);
                  i++;
                  j--;
              }
                return;
             }



       for(int i=n-1;i>=index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
       }

                   int i=index+1;
                   int j=n-1;
                 while(i<j){
                     swap(nums[i],nums[j]);
                             i++;
                             j--;
                         }

       return;
    }
};