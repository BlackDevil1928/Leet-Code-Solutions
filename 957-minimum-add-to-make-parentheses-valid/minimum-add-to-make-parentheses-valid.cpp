class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        stack<int> st;

        for (int i=0; i<s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            }
            else{
                if (!st.empty()) {
                    st.pop();
                }
                else{
                    count += 1;
                }
            }
        }
        if (!st.empty()){
            count += st.size();
        }
        return count;
    }
};
