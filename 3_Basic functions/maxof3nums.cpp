#include <iostream>
using namespace std;

// function
int maxofThreeNumbers(int a, int b,int c)
{

    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;
    int maxNumber=maxofThreeNumbers(a,b,c);
    cout<<maxNumber<<" is greatest number"<<endl;
    return 0;
}