#include "var.h"
#include <iostream>
#include <typeinfo>

int main() {
//	var a(10);
	//std::cout << a;
	int* i = new int;
	*i = 220;
	void* p = i;

	int* vp;
	std::cout << *static_cast<decltype(vp)>(p);
	return 0; 
}