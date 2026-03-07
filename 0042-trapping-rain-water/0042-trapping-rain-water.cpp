class Solution {
public:
    int trap(vector<int>& height) {
        int global = max_element(height.begin(), height.end()) - height.begin();

        int ans = 0;
        int currMax = 0;
        for (int i = 0; i < global; i++) {
            if (height[i] >= currMax) {
                currMax = height[i];
            } else {
                ans += currMax - height[i];
            }
        }

        currMax = 0;
        for (int i = height.size() - 1; i > global; i--) {
            if (height[i] >= currMax) {
                currMax = height[i];
            } else {
                ans += currMax - height[i];
            }
        }

        return ans;
    }
};