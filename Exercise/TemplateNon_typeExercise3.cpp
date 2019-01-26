/*
 * TemplateNon_typeExercise3.cpp
 *
 *  Created on: 26-Dec-2018
 *      Author: siddharth.kumar
 */

#include <iostream>
using namespace std;

template<size_t NUM_COPIES>
void myPrint(const string str) {
	for (auto i=0; i<NUM_COPIES; i++) {
		cout<<str<<endl;
	}
}

int main () {
	myPrint<3>("Biddy...");
	return 0;
}


