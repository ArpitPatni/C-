#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int binarySearch(vector<int> arr, int s, int e, int target)
{
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }

    if (arr[mid] < target)
    {
        return binarySearch(arr, mid + 1, e, target);
    }
    else
    {
        return binarySearch(arr, mid - 1, e, target);
    }
}
int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 90};
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int target = 100;
    int ans = binarySearch(arr, s, e, target);
    cout << "Target is present at index " << ans << endl;
    return 0;
}