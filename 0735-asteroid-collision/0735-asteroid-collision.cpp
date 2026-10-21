class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            bool alive=true;
            while(!st.empty() && st.top()>0 && asteroids[i]<0){
                if(abs(st.top()) < abs(asteroids[i])){
                    alive=true;
                    st.pop();
                }

                else if (abs(st.top()) == abs(asteroids[i])){
                    alive=false;
                    st.pop();
                    break;
                }
               else {
                    alive=false;
                    break;
               }
            }
           if(alive){
            st.push(asteroids[i]);
           }

            }

            n=st.size();
            vector<int>ans(n);
            for(int i=n-1;i>=0;i--){
                ans[i]=st.top();
                st.pop();
            }
        return ans;
        }
};