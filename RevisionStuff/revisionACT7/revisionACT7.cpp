#include <iostream>

using namespace std;

class A {
public:
	
	void display() {
		cout << "I am the grandparent";
	}
};

class B : public A {
public:
	void Display() {
		cout << "I am the parent";
		cout << "I am derived from A";
	}
};

class C : public B{
public:
	void display() {
		cout << "i am the Child";
		cout << "i am derived from B";
	}
};



int main()
{

}