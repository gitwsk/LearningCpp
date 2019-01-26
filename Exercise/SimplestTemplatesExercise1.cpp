#include <iostream>
#include <cassert>
#include <exception>

using namespace std;

/*void doMath() {
	int myInt = 3;
	int myOtherInt = -3;
	assert (abs(myInt) == abs(myOtherInt));

	double myDouble = 4.0;
	double myOtherDouble = -4.0;
	assert (abs(myDouble) == abs(myOtherDouble));
}*/

template<typename T>
void doMath(T myNum1, T myNum2) {
	assert (abs(myNum1) == abs(myNum2));
	cout<< "They match!!";
}

int main() {
	int myInt = 4;
	int myOtherInt = -4;
	//double myDouble = 4.0;
	//double myOtherDouble = -4.0;
	doMath(myInt, myOtherInt);
	cout<<"HIIII";
    return 0;
}
