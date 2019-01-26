//============================================================================
// Name        : MyTests.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

/*#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Hello World!!!");
	return EXIT_SUCCESS;
}*/
#ifndef PRINTLN_H_
#define PRINTLN_H_
#include <ostream>
//#include <iostream>
// base case overload
void println(std::ostream &out){
  out <<'\n';
}
// variadic template
template <typename HEAD, typename ... T>
void println(std::ostream & out,HEAD const &h, T const & ... tail){
  out << h; // cut off head
  if (sizeof...(tail)){
    out <<", ";
  }
  println(out,tail...); // recurse on tail...
}

#endif /* PRINTLN_H_ */

/*
int main(void)
{
	//println(std::cout);
    return 0;
}*/
