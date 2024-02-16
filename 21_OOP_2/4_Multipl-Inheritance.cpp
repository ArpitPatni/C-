#include<iostream>
using namespace std;
class A{
public:
int chemistry=10;
};
class B{
public:
int chemistry=2;
};

class C:public A,public B{
    public:
    int maths;
};
int main(){
C obj;
//scope resolution operator 
//This is famous diamond problem from Inheritance
cout<<obj.A::chemistry<<endl;
return 0;
}