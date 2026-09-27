class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int i = 0, j = 0;
        int area = 0;
        int minus = 0;
        while (i < n && height[i] == 0) i++;
        j = i + 1;
        while (i < n - 1) {
            int best = -1;
            int bestIndex = -1;
            minus = 0;
            while (j < n) {
                if (height[j] >= height[i]) {
                    break;
                }

                if (height[j] > best) {
                    best = height[j];
                    bestIndex = j;
                }

                minus += height[j];
                j++;
            }

            if (j < n) {
                // Found a wall >= height[i]
                area += (j - i - 1) * min(height[i], height[j]);
                area -= minus;

                i = j;
                j++;
            }
            else if (bestIndex != -1) {
                // No wall >= height[i]
                // Use the highest wall we found
                j = bestIndex;

                minus = 0;
                for (int k = i + 1; k < j; k++)
                    minus += height[k];

                area += (j - i - 1) * min(height[i], height[j]);
                area -= minus;

                i = j;
                j++;
            }
            else {
                break;
            }
        }

        return area;
    }
};