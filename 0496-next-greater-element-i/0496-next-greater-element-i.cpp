class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        int n1=nums1.size();
        int n2=nums2.size();
        stack<int>st;
        vector<int>temp(n1);
        for(int i=n2-1;i>=0;i--){
           while(!st.empty() && nums2[i]>st.top()){
                    st.pop();
           } 

           if(st.empty()){
            mp[nums2[i]]=-1;
            st.push(nums2[i]);
           }
           else{
            mp[nums2[i]]=st.top();
            st.push(nums2[i]);
           }
        }
        for(int i=0;i<n1;i++){
            temp[i]=mp[nums1[i]];
        }
        return temp;
    }
};