#include<iostream>
using namespace std;
class Fruit{
    public:
    string name;
};
class Mango:public Fruit{
    public:
    int weight;
};
class Alphanso:public Mango{
public:
    int sugarLevel;
};
int main(){
    Alphanso*obj=new Alphanso;
    cout<<obj->name<<endl;
    cout<<obj->weight<<endl;
    cout<<obj->sugarLevel<<endl;
}