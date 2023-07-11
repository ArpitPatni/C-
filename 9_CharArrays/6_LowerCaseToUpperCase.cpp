#include <iostream>
#include<string.h>
using namespace std;
void convertToUpperCase(char ch[])
{
    int n=strlen(ch);
    for(int i=0;i<n;i++){
        if(ch[i]>='a' && ch[i]<='z'){
              ch[i]=ch[i]-'a'+'A';
        }
      
    }
}
int main()
{
    char ch[100];
    cout << "Enter your name " << endl;
    cin>>ch;
    convertToUpperCase(ch);

    cout << "Upper case " << ch << endl;
}

//lower to upper=  -'a'+'A'
//upper to lower== -'A'+'a'