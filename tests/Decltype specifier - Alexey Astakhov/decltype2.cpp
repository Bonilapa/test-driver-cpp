// Author : Astakhov Alexey
// obvious, but important semantics in pointer to array

#include "stdafx.h"
#include <iostream>

using namespace std;
template<typename T1>
auto f(T1 a) ->decltype(a) {
	return a;
}

int main()
{
	int a[] = { 5, 6, 7};
	auto b = f(a);
	if (typeid(b) != typeid(a))
		return 0;
	else
		return 1;
}