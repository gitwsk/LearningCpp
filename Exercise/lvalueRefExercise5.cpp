/*
 * lvalueRefExercise5.cpp
 *
 *  Created on: 30-Dec-2018
 *      Author: siddharth.kumar
 */


#include <iostream>

using namespace std;

void square(const int& num) {
	cout<<endl<<num*num;
}

int main () {
	int k = 0;
	int &l = k;
	int i = 4;
	cout<<k<<endl<<l<<endl<<&l<<endl<<&k;
	square(i);
	square(4);
	return 0;
}

