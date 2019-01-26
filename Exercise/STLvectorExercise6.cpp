/*
 * STLvectorExercise6.cpp
 *
 *  Created on: 30-Dec-2018
 *      Author: siddharth.kumar
 */

#include <iostream>
#include <vector>
#include <algorithm> //sort

using namespace std;

int main () {
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(3);
	vec.push_back(2);

	vector<int>::iterator itr1 = vec.begin();
	vector<int>::iterator itr2 = vec.end(); //vec.end() points to a idx after the size of the vector
	cout<<*itr1<<endl;
	cout<<*(vec.end()-1)<<endl;
	cout<<*(itr2-1)<<endl;//same as above line

	for(vector<int>::iterator itr = itr1; itr!=itr2; ++itr ) {
		cout<<*itr<<" ";
	}
	cout<<endl;

	sort(itr1, itr2); //Algorithms work on containers directly. They work instead on iterators..
	for(vector<int>::iterator itr = itr1; itr!=itr2; ++itr ) {
		cout<<*itr<<" ";
	}
}




