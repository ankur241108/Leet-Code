class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left;
        vector<int>right(n);
        if (height.empty()) return 0;
        int water =0;

        int temp=height[0];
        for(int i=0;i<n;i++){
             left.push_back(temp);
            if(temp<height[i]){
             temp=height[i];
            }
        }

        temp=height[n-1];
        for(int i=n-1;i>=0;i--){
            right[i]=temp;
            if(temp<height[i]){
                temp=height[i];
            }
        }

        for(int i=1;i<n-1;i++){
            if((min(left[i],right[i])-height[i])<=0){
                continue;
            }
            else{
                water+=(min(left[i],right[i])-height[i]);
            }
        }
        return water;
    }
};