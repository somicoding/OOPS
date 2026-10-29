
#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;

    s1.roll = 1;
    s1.name = "Rahul";

    s1.display();

    return 0;
}
