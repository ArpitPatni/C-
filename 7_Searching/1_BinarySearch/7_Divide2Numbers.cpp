#include <iostream>
using namespace std;

int binarySearch(int number, int divisor)
{
    int s = 0;
    int e = abs(number);
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (abs(mid * divisor) == abs(number))
        {
            ans = mid;
            break;
        }
        if (abs(mid * divisor) > abs(number))
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    if (number < 0 && divisor < 0 || number > 0 && divisor > 0)
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}
int main()
{
    int number;
    cout << "Enter the number" << endl;
    cin >> number;
    int divisor;
    cout << "Enter the divisor" << endl;
    cin >> divisor;
    int ans = binarySearch(number, divisor);

    cout << "Answer is " << ans << endl;

    int precision;
    cout << "Enter the number of floating digits" << endl;
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j * divisor <= number; j = j + step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    cout << "Final ans is " << finalAns << endl;
    return 0;
}