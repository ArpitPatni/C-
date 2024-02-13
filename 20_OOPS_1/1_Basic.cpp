#include<iostream>
using namespace std;
class dummyClass{
    //defining the scope
    //By default classes scope is private
    private:
    int weight;
    public:

    //state or properties
    int age;
    string name;

    ~dummyClass(){
        cout<<"I'm destructor"<<endl;
    }
    //Default constructor
    dummyClass(){
        this->weight=10;
        this->age=18;
        this->name="Arpit";
        cout<<"Constructor called"<<endl;
    }

    //parameterised contructor

    dummyClass(int weight,int age){
        cout<<"Constructor 1 called"<<endl;
    }

    //copy constructor

    dummyClass(dummyClass& obj){
        cout<<"Copy constructor called"<<endl;
    }
    //behaviour or functions
    void eat(){
        cout<<"I'm eating"<<endl;
    }
    void play(){
        cout<<"Let's play"<<endl;
    }

    //getters 
    int getWeight(){
        return weight;
    }

    //setters
    void setWeight(int weight){
        //this is a pointer to current object
        this->weight=weight;
    }
};
int main(){

    //static way of creating object

    // dummyClass obj;
    // obj.age=27;
    // obj.name="Arpit";
    // cout<<"Age of arpit is "<<obj.age<<endl;
    // cout<<"Name is "<<obj.name<<endl;
    // obj.eat();
    // obj.play();
    // obj.setWeight(10);
    // cout<<"Weight is "<<obj.getWeight()<<endl;

    //dynamic way of creating object
    dummyClass a;
    dummyClass* obj1=new dummyClass;
    dummyClass* obj=new dummyClass(10,10);

    delete(obj1);

    // dummyClass newObj=a;
    // dummyClass newObj2(*obj);
    obj->age=17;
    obj->name="Arpit";
    cout<<obj->age<<endl;
    cout<<obj->name<<endl;
    obj->eat();
    obj->play();
    return 0;
    
    return 0;
}