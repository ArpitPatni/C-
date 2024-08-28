// Time complexity-Linear pattern O(n)
// space complexity
//  O(n) for dp array.No recursion stack space we have elimanted the recursion stack space which we were
//using

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n]<<endl;

    return dp[n];
}