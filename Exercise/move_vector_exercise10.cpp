/*
 * move_vector_exercise10.cpp
 *
 *  Created on: 15-Jan-2019
 *      Author: siddharth.kumar
 */

#include <iostream>
#include <vector>
#include <utility>

//https://www.youtube.com/watch?v=dcgqUb1SXPk

using namespace std;

int main() {
	vector <int> v1 = {1,2,3,4,5};
	cout<<&v1[0]<<endl;
	cout<<v1[0]<<endl;
	auto v2 = move(v1);
	cout<<&v2[0]<<endl;
	cout<<v2[0]<<endl;
//	cout<<&v1[0]<<endl;
//	cout<<v1[0]<<endl; //This line will throw segmentation fault after std::move
	//since std::move has already transferred resources of v1 to v2 and v1's state
	//is unspecified

}


