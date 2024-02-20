#pragma GCC optimize("O3", "unroll-loops")
struct TrieNode {
    TrieNode* next[26];
    int count = 0;

    TrieNode() {
        fill(next, next+26, (TrieNode*)NULL);
    }

    ~TrieNode() {
    //    cout<<"Desturctor\n";
        for (int i=0; i<26; ++i) {
            if (next[i] !=NULL) {
                delete next[i];
            }
        }
    }
};

class Solution {
public:
    long long countPrefixSuffixPairs(vector<string>& words) {
        TrieNode root=TrieNode();
        long long ans=0;
        for (string& s: words){
            TrieNode* Node=&root;
            int n=s.size();
            for(int i=0; i<n; i++){
                // "ac"->(ac)(ca) "acbac"->(ac)(ca)(bb)(ac)(ca)
                int index=s[i]-'a';
                if (Node->next[index]==0)
                    Node->next[index]=new TrieNode();
                Node=Node->next[index];

                index=s[n-1-i]-'a';
                if (Node->next[index]==0)
                    Node->next[index]=new TrieNode();
                Node=Node->next[index];
                ans+=Node->count;
            }
            Node->count++;
        }
        return ans;
    }
};

auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();