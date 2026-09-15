class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        long long high=0;
       
        for(int i=0;i<n;i++){
            high+=weights[i];
        }
         int ans=high;

        int low=*max_element(weights.begin(),weights.end());
        while(low<=high){
                int mid=low+(high-low)/2;
                int sum=0;
                int count=1;
                
                for(int j=0;j<n;j++){
            
                    if(sum+weights[j]<=mid){
                        sum+=weights[j];
                    }

                    else{
                        sum=weights[j];
                        count++;
                    }
                }

               

                 if(count<=days){
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