#include <bits/stdc++.h>
using namespace std;
void findMinElement(int arr[], int n, int i, int &minElement)
{
    if (i >= n)
    {
        return;
    }

    if (arr[i] < minElement)
    {
        minElement = arr[i];
    }
    findMinElement(arr, n, i + 1, minElement);
}
int main()
{
    int arr[5] = {10, 50, 22, 44, 1};
    int n = 5;
    int i = 0;
    int minElement = INT_MAX;
    findMinElement(arr, n, i, minElement);
    cout << "Minimum Element is " << minElement << endl;
    return 0;
}