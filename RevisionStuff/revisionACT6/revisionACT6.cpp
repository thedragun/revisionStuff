#include <iostream>

using namespace std;

class A {
public:
    int a, b;
    int read(int x, int y) {
        int out = x + y;
        return out;
    }
};

class B {
public:
    string aString;
    void read(string x) {
        cout << x;
    }
};

class C : public A, public B {
public:
    void output() {
        int out;
        cout << a << b;
        out = A::read(a, b);
        cout << out;
        B::read(B::aString);

    }
};

int main()
{
    A a1;
    B b2;
    C c3;
    cout << "enter two numbers: ";
    cin >> a1.a;
    cin >> a1.b;
    cout << "enter a small sentence: ";
    cin >> b2.aString;


}
