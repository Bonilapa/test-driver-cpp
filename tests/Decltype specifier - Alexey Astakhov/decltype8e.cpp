// Author : Astakhov Alexey
// decltype tries to copy the array via int[3] type. E0520

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a[] = { 1, 2, 3 };
	decltype(auto) c = a;
	return 0;
}
