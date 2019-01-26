/*
 * TemplatesExercise2.cpp
 *
 *  Created on: 26-Dec-2018
 *      Author: siddharth.kumar
 */

#include <iostream>
using namespace std;

template<typename T1, typename T2>
struct SimplePair {
	T1 first;
	T2 sec;
	SimplePair(T1 f, T2 s): first{f}, sec{s} {};
};

int main() {
	auto foo = SimplePair <int, double>{22, 3.2};
	auto bar = SimplePair <string, int>{"Siddy", 4};
	cout<<foo.sec<<endl;
	cout<<bar.first<<endl;
	return 0;
}
