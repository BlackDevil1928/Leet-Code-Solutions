class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int, int>> events;
        vector<vector<int>> result;

        for (auto& b : buildings) {
            events.push_back({b[0], -b[2]});
            events.push_back({b[1], b[2]});
        }

        sort(events.begin(), events.end(), [](auto& a, auto& b) {
            if (a.first != b.first)
                return a.first < b.first;
            return a.second < b.second;
        });

        multiset<int> heights = {0};
        int prevMax = 0;

        for (auto& e : events) {
            int x = e.first;
            int h = e.second;

            if (h < 0) {
                heights.insert(-h);
            } else {
                heights.erase(heights.find(h));
            }

            int currMax = *heights.rbegin();

            if (currMax != prevMax) {
                result.push_back({x, currMax});
                prevMax = currMax;
            }
        }

        return result;
    }
};
