
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};
class Cat:public Animal{
    public:
    void sound()override{
        cout<<"Cat meowss"<<endl;
    }
};

int main() {
    Animal* a;
    Animal* b;
    Cat c;
    Dog d;

    a = &d;
    b=&c;
    b->sound();
    a->sound();

    return 0;
}
