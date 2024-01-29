#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void printSubsequnces(string str, string output, int i)
{
    // base case
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }
    //exclude
    printSubsequnces(str,output,i+1);

    output.push_back(str[i]);
    printSubsequnces(str,output,i+1);

}
int main()
{
    string str = "abc";
    string output = "";
    int i = 0;
    printSubsequnces(str, output, i);
    return 0;
}