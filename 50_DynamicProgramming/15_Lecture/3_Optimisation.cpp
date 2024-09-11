bool subsetSumToK(int n, int k, vector<int> &arr)
{
    // Write your code here.
    vector<bool> prev(k + 1, 0), curr(k + 1, 0);
    prev[0] = true;
    curr[0] = true;

    prev[arr[0]] = true;
    for (int index = 1; index < n; index++)
    {
        for (int target = 1; target <= k; target++)
        {
            bool notTake = prev[target];
            bool take = false;
            if (arr[index] <= target)
            {
                take = prev[target - arr[index]];
            }
            curr[target] = take | notTake;
        }
        prev = curr;
    }
    return prev[k];
}