
#include <iostream>
using namespace std;

class Bank {
private:
    int balance;

public:
    void setBalance(int b) {
        if (b >= 0)
            balance = b;
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank b1;

    b1.setBalance(5000);
    b1.display();

    return 0;
}
