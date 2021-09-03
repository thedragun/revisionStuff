#include <iostream>

using namespace std;

class Parent {
public:
	void whoareyou() {
		cout << "i am the parent\n";
	}
};

class Child : public Parent {
public:
	void whoareyou() {
		cout << "i am the Child";
	}
};

int main()
{
	Parent Pobj;
	Pobj.whoareyou();
	Child Cobj;
	Cobj.whoareyou();

}