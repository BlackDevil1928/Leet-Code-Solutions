class Solution {
public:
    bool search(int k,vector<int>&v) {
        int i=0,j=v.size()-1;
        while(i<=j) {
            int m=(i+j)/2;
            if(k==v[m])
                return false;
            if(k>v[m])
                i=m+1;
            else
                j=m-1;
        }
        return true;
    }
    int firstMissingPositive(vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        for(int i=1;i<=100001;i++) {
            if(search(i,v))
                return i;
        }
        return 0;
    }
};