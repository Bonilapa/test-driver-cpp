// Author : Astakhov Alexey
// decltype copys the link to array via &int[3] type. E0520

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a[] = { 1, 2, 3 };
	decltype(auto) c = (a);
	return 0;
}

