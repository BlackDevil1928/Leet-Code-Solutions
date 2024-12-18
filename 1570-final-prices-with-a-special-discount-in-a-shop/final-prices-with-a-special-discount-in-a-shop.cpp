class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> nse(n);

        stack<int> st;
        st.push(n-1);
        nse[n-1] = -1;
        for(int i=n-2; i>=0; i--){
            while(!st.empty() && prices[st.top()] > prices[i]){
                st.pop();
            }
            if(!st.empty()){
                nse[i] = st.top();
            }
            else nse[i] = -1;
            st.push(i);
        }
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            if(nse[i] == -1) ans[i] = prices[i];
            else ans[i] = prices[i]-prices[nse[i]];
        }
        return ans;
    }
};