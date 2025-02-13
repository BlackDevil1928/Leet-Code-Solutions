#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq; // Min-heap

        // Add all elements less than k to the priority queue
        for (int num : nums) {
            if (num < k) {
                pq.push(num);
            }
        }

        int operations = 0;

        while (pq.size() >= 2) {
            int x = pq.top(); // Smallest element
            pq.pop();
            int y = pq.top(); // Second smallest element
            pq.pop();

            long newValue = 2L * x + y; // Calculate new value
            if (newValue < k) {
                pq.push(newValue); // Add new value back to the heap if it's still less than k
            }

            operations++; // Increment operation count
        }

        // If there's still one element left in the heap, it needs one more operation
        if (!pq.empty()) {
            operations++;
        }

        return operations;
    }
};