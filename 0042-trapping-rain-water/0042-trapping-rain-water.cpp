class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
         // LEFT GREATER ELEMENT
         vector<int>lge(n,0);

         stack<int>st;

         for(int i=0;i<n;i++){
            while(!st.empty() && st.top()<=height[i]){
                st.pop();
            }

            if(st.empty()){
                lge[i]=-1;
                st.push(height[i]);
            }

            if(height[i]<st.top()){
                lge[i]=st.top();
            }
         }

         //RIGHT GREATER ELEMENT
         vector<int>rge(n,0);
         stack<int>st1;

         for(int i=n-1;i>=0;i--){
            while(!st1.empty() && st1.top()<=height[i]){
                st1.pop();
            }

            if(st1.empty()){
                rge[i]=-1;
                st1.push(height[i]);
            }

            if(st1.top()>height[i]){
                rge[i]=st1.top();
            }


         }

        int ans=0;

        for(int i=0;i<n;i++){
            int temp=min(lge[i],rge[i])-height[i];
            if(temp>0){
                ans+=temp;
            }
        }

        return ans;


    }
};