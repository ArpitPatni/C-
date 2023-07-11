#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 6, 8, 10};
    int sizeA = 6;
    int brr[] = {3, 4, 5, 6};
    int sizeB = 4;

    for (int i = 0; i < sizeA; i++)
    {
        int element = arr[i];
        for (int j = 0; j < sizeB; j++)
        {
            if (element == brr[j])
            {
                brr[j] = -1;
            }
        }
    }

    vector<int> crr;
    for (int i = 0; i < sizeA; i++)
    {
        crr.push_back(arr[i]);
    }
    for (int i = 0; i < sizeB; i++)
    {
        if (brr[i] != -1)
        {
            crr.push_back(brr[i]);
        }
    }

    cout << "Union of two Arrays is" << endl;

    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    return 0;
}
