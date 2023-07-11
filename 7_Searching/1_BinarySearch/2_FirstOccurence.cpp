#include <iostream>
#include <vector>
using namespace std;
int firstOccurence(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            // ans store
            ans = mid;
            // left search
            e = mid - 1;
        }
        else if (target < arr[mid])
        {
            e = mid - 1;
        }
        else if (target > arr[mid])
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 2, 4, 4, 5, 6, 7, 8};
    int target = 4;
    int ans = firstOccurence(arr, target); 
    cout << "First occurence is at " << ans <<" index" <<endl;
    return 0;
}