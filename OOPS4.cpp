
#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v) {
        value = v;
    }

    Number operator+(Number n) {
        return Number(value + n.value);
    }
};

int main() {
    Number a(10), b(20);

    Number c = a + b;

    cout << "Sum: " << c.value << endl;

    return 0;
}
