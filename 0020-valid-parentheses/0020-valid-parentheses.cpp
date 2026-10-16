class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n=s.size();
        // if(n%2!=0){
        //     return false;
        // }
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }

            else {

                 if (st.empty()) {
                 return false;
}
                char ch=st.top();
               
                if(ch=='(' && s[i]==')' || ch=='[' && s[i]==']' || ch=='{' && s[i]=='}'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.size()==0){
            return true;
        }
        
        

        return false;
    }
};