class Solution {
public:
    int trap(vector<int>& height) {
     

        int n=height.size();

        int left=0;
        int right=n-1;
        int leftmax=0;
        int rightmax=0;
        int rainwater=0;
        

        while(left<right){
            if(height[left]<=height[right]){
                int l=leftmax-height[left];
                if(l<=0){
                    leftmax=max(leftmax,height[left]);
                }
                else{
                rainwater+=l;
                }

                left++;
            }

            else{
                int r=rightmax-height[right];
                if(r<=0){
                    rightmax=max(rightmax,height[right]);
                }
                else{
                    rainwater+=r;
                }
                right--;
            }
        }
        return rainwater;
    }
};