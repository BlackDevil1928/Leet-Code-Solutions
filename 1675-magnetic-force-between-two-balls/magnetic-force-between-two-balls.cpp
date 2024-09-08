class Solution {
public:
    int maxDistance(vector<int>& pos, int m) {
        int n = pos.size();
        sort(pos.begin(), pos.end());
        int s = 1;
        int e = (pos[n - 1] - pos[0]) / (m - 1);
        int ans = 1;

        while (s <= e) {
            int mid = (s + e) / 2;
            if (canPlaceBalls(pos, m, mid)) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return ans;
    }
private:
    bool canPlaceBalls(vector<int>& pos, int m, int dis) {
        int count = 1;
        int last = pos[0];
        int n = pos.size();

        for (int i = 1; i < n; i++) {
            if (pos[i] - last >= dis) {
                last = pos[i];
                count++;
            }
            if (count == m)
                return true;
        }

        return false;
    }
};