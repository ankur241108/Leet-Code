class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr1(n/2,0);
        vector<int>arr2(n/2,0) ;
        int j=0;
        int k=0;

        for(int i=0;i<n;i++){
            if(nums[i]<0){
                arr1[j]=nums[i];
                j++;
            }
            else{
                arr2[k]=nums[i];
                k++;
            }
        }

        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=arr2[i/2];
            }
            else{
                nums[i]=arr1[i/2];
            }
        }

        return nums;
    }
};