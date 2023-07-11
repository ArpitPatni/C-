#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);


    cout<<"After pushing elements into the array"<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    arr.pop_back();
    cout<<"After removing the last element using pop "<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    vector<int> brr(10,-1);  //defining the size 10 and intiliasing all the values with -1

    cout<<"Example of defining the size of an aaray and initialising with some value here we are initialising with value -1"<<endl;
     for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout<<endl;
    int n;
    cout<<"Please enter the value of n"<<endl;
    cin>>n;
    vector<int> crr(n);
    crr.push_back(2);
    crr.push_back(2);

    cout<<"The capacity of crr is "<<crr.capacity()<<endl;
}