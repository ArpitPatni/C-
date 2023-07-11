#include <iostream>
using namespace std;

void getSum(int a, int b)
{
    cout << "Sum is " << a + b << endl;
}

int main()
{
    int a, b;
    cout << "Please enter two numbers" << endl;
    cin >> a >> b;
    getSum(a, b);
    return 0;
}