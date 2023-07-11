#include <iostream>
#include <string.h>
using namespace std;
bool checkPalindrome(char word[])
{
    int i = 0;
    int j = strlen(word) - 1;
    while (i <= j)
    {
        if (word[i] !=word[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    char word[100];
    cin >> word;

    if (checkPalindrome(word))
    {
        cout << "PALINDROME" << endl;
    }
    else
    {
        cout << "NOT PALINDROME" << endl;
    }
}