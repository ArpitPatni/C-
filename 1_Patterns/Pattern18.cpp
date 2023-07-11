// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n>9){
        cout<<"Please enter value less than 9"<<endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        int startNumIndex = 8 - i;
        int num = i + 1;
        int countNum = num;
        for (int j = 0; j < 17; j++){
            if(j==startNumIndex&&countNum>0){
                cout<<num;
                startNumIndex+=2;
                countNum--;
            }else{
                cout<<"*";
            }
        }
        cout << endl;
    }
}