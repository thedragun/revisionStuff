#include <iostream>

using namespace std;

class Base {
public:
    int a, b, a2, b2;

    void read_input() {
        cout << "\n\nenter sum start: ";
        cin >> a;
        cout << "\n\nenter sum end: ";
        cin >> b;
        cout << "\n\nenter product start: ";
        cin >> a2;
        cout << "\n\nenter product end: ";
        cin >> b2;
    }
     
};

class Sum : public Base {
public:
    int sum() {
        if (a || b >= 1000000) {
            cout << "the values are outside the constraints please renter them: ";
            cin >> a;
            cin >> b;

            return a + b;
        }
    }
};

class Product : public Base {
public:
    int product() {
        if (a || b >= 1000000) {
            cout << "the values are outside the constraints please renter them: ";
            cin >> a;
            cin >> b;

            return a * b;
        }
    }
};

class Child : public Base{
public:
    Sum add;
    Product mul;

    void display() {
        cout << a << b << add.sum();
        cout << a2 << 2 << mul.product();
    }
};

int main()
{
    Base in;
    in.read_input();
    Child obj;
    obj.display();
}
