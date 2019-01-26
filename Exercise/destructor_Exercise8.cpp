/*
 *
 *
 *  Created on: 15-Jan-2019
 *      Author: siddharth.kumar
 */

#include <iostream>
using namespace std;
struct Foo {
	Foo() = default;
	int * i = nullptr;
	~Foo() {
/*		if (i != nullptr) {
			delete i;
			i = nullptr;
		}
*/
		delete i;
		cout<<"In Destructor"<<endl;
	}
};

void FuncByValue(Foo other);

void FuncByRef(Foo& other);

void bar1(Foo other) {
	Foo f2(other);
	cout<<"In bar1"<<endl<<f2.i<<endl;
}

void bar2(Foo& other) {
	Foo f3(other);
	cout<<"In bar2"<<endl<<f3.i<<endl;
}

int main() {
	Foo f1;
	f1.i = new int(42);
	cout<<f1.i<<endl;
	cout<<"Hiii"<<endl;
	bar1(f1);//Passing by value
	cout<<"Hiii2"<<endl;
	bar2(f1);//Passing by ref (One less destructor call in this case)
	cout<<"Hiii3"<<endl;
	return 0;
}

