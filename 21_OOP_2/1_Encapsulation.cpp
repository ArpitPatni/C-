#include<iostream>
using namespace std;
class Animal{
    //perfect or full encapsulation
    private:
    int age;
    int weight;

    public:
    void eat(){
        cout<<"I'm eating"<<endl;
    }

    //getters and setters
    int getAge(){
        return this->age;
    }
    int setAge(int age){
        this->age=age;
    }
};
int main(){

}