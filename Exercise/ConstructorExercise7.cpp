/*
 * ConstructorExercise7.cpp
 *
 *  Created on: 14-Jan-2019
 *      Author: siddharth.kumar
 */

#include <iostream>
#include <vector>
#include <algorithm> //sort

using namespace std;

struct A {

	int *ptr;

	A() {
		cout<<" constr"<<endl;
		ptr = new int;
	}

	~A() {
		cout<<"Destructor"<<endl;
		delete ptr;
	}

	A(const A & a1) {
		cout<<"Copy constr"<<endl;
		this->ptr = new int;
	}
};

int main() {
	return 0;
}
