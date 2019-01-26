/*
 * inheritance_exercise11.cpp
 *
 *  Created on: 15-Jan-2019
 *      Author: siddharth.kumar
 */


#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class foo {
public:
	foo() {
		cout<<"In foo's default constructor"<<endl;
	}
	~foo() {
		cout<<"In foo's destructor"<<endl;
	}
};

class bar1 : public foo {
public:
	int a;
	bar1() {
		cout<<"In bar1's default constructor"<<endl;
	}
	~bar1() {
		cout<<"In bar1's destructor"<<endl;
	}
};

class bar2 : public bar1 {
public:
	bar2() {
		cout<<"In bar2's default constructor"<<endl;
	}
	~bar2() {
		cout<<"In bar2's destructor"<<endl;
	}
};

int main() {
	bar2 sid;
	cout<<sid.a<<endl;
	return 0;
}
