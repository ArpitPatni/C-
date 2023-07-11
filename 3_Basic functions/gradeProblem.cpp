#include <iostream>
using namespace std;
char getGrade(int n)
{
    if (n >= 90)
        return 'A';
    else if (n >= 80)
        return 'B';
    else if (n >= 70)
        return 'C';
    else
        return 'F';
}
int main()
{
    int n;
    cout << "Enter marks" << endl;
    cin >> n;
    char ans = getGrade(n);
    cout << "You got " << ans << " grade" << endl;
}