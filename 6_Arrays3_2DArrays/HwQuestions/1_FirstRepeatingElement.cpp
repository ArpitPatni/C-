#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main()
{
    vector<int> arr{1, 5, 3, 4, 3, 5, 6};
    int hash[7] = {0};
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (hash[arr[i]] > 1)
        {
            cout << "Ans is " << arr[i] << endl;
            break;
        }
    }
    return 0;
}