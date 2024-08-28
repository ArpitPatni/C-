// Time complexity-O(n)
// Space complexity-O(1)

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;
        for (int i = 1; i < n; i++)
        {
            // pick
            int pick = nums[i];
            if (i > 1)
            {
                pick += prev2;
            }
            // not pick
            int notpick = prev;
            int curr = max(pick, notpick);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};