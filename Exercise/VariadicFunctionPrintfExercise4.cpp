/*
 * VariadicFunctionExercise4.cpp
 *
 *  Created on: 26-Dec-2018
 *      Author: siddharth.kumar
 */

#include <iostream>
using namespace std;

void printStuff() {
	cout<<endl;
}

template <typename Tfirst, typename... Trest>
void printStuff(Tfirst first, Trest... rest) {
	cout<<first<<" ";
	printStuff(rest...);
}

int main() {
	printStuff(11, 2.4, "xx", "j");
	return 0;
}
