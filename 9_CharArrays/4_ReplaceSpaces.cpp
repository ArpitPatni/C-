#include <iostream>
#include<string.h>
using namespace std;
void replaceSpaces(char ch[])
{
    int n=strlen(ch);
    for(int i=0;i<n;i++){
        if(ch[i]==' '){
            ch[i]='@';
        }
    }
}
int main()
{
    char ch[100];
    cout << "enter your name " << endl;
    cin.getline(ch, 50);
    cout << "Before Replace " << ch << endl;
    replaceSpaces(ch);

    cout << "After Replace " << ch << endl;
}