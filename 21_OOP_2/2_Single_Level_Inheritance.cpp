#include<iostream>
using namespace std;
class Animal{
  public:
  int age;
  int weight;

  public:
  void eat(){
    cout<<"Eating"<<endl;
  }  
};

class Dog:public Animal{

};
int main(){
Dog* obj1=new Dog;
obj1->eat();
}