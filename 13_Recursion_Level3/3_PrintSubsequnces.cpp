#include <bits/stdc++.h>
using namespace std;
void printSubsequnces(string str, string output, int i)
{
    // base case
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }

    // exclude case
    printSubsequnces(str, output, i + 1);
    // include case
    output.push_back(str[i]);
    // output=output+str[i] //also we can write
    printSubsequnces(str, output, i + 1);
}
int main()
{
    string str = "abc";
    string output = "";
    int i = 0;
    printSubsequnces(str, output, i);
    return 0;
}