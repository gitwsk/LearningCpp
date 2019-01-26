/*
 *
 *
 *  Created on: 15-Jan-2019
 *      Author: siddharth.kumar
 */

#include <utility>
#include <iostream>

using namespace std;

//https://www.youtube.com/watch?v=dcgqUb1SXPk
//Remember rule of 5, 3 and 0.
//Rule of 5 replaced rule of 3 after C++11 when move semantics were introduced



//Constructors and destructors do not have return types nor can they return values.
//References and pointers cannot be used on constructors and destructors because their addresses cannot be taken.
//Constructors cannot be declared with the keyword virtual.
//Constructors and destructors cannot be declared static, const, or volatile.
//Unions cannot contain class objects that have constructors or destructors.


struct Foo {
	//Compiler automatically generates these (if not explicitly mentioned) below 6 (special) member functions
	////Foo() 					= default;						//default constructor
	Foo(Foo const& other)	= default;						//copy constructor
	Foo& operator 			= (Foo const& other) = default;	//copy assignment operator
	Foo(Foo&& other) 		= default;						//move constructor
	Foo& operator 			= (Foo& other) = default;		//move assignment operator
	~Foo() 					= default;						//destructor

	int *i 					= nullptr;
};

int main() {
	return 0;
}
