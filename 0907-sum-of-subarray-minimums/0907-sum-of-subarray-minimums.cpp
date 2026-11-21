class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
    int  mod=(int) (1e9+7);
    int n=arr.size();


    // Next Smaller Element
    
    vector<int>nse(n,0);
    stack<int>st;

    for(int i=n-1;i>=0;i--){

        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        } 

        if(st.empty()){
            nse[i]=n;
            st.push(i);
        }

        else{
            nse[i]=st.top();
            st.push(i);
        }

    }




    //Previous SMaller ELement

    stack<int>st1;
    vector<int>pse(n,0);

    for(int i=0;i<n;i++){
        while(!st1.empty() && arr[st1.top()]>=arr[i]){
            st1.pop();
        }

        if(st1.empty()){
            pse[i]=-1;
            st1.push(i);
        }

        else{
            pse[i]=st1.top();
            st1.push(i);
        }
    }

    long long  sum=0;

    for(int i=0;i<n;i++){
        sum+=(((nse[i]-i)%mod)*((long long)(i-pse[i])*arr[i])%mod);
        sum=sum%mod;
    }

    return sum;
    }

};