#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{5,4,3,2,1};
    int n = arr.size();

    // outer loop rounds
    for (int i = 1; i < n; i++)
    {
        // inner loop is finding index of minimum element from i to n
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped=true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(swapped==false){
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}