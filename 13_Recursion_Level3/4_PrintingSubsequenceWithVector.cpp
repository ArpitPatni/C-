#include <bits/stdc++.h>
using namespace std;
void printSubsequnces(string str, string output, int i, vector<string> &ans)
{
    // base case
    if (i >= str.length())
    {
        ans.push_back(output);
        return;
    }

    // exclude case
    printSubsequnces(str, output, i + 1, ans);
    // include case
    output.push_back(str[i]);
    // output=output+str[i] //also we can write
    printSubsequnces(str, output, i + 1, ans);
}
int main()
{
    string str = "abc";
    string output = "";
    int i = 0;
    vector<string> ans;
    printSubsequnces(str, output, i, ans);

    cout << "Printing all subsequnces" << endl;

    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "Size of ans is " << ans.size() << endl;
    return 0;
}