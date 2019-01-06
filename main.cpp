#include "vector.h"
#include <iostream>
using namespace std;

int main()
{
	::vector<int> test;
	test.push_back(2);
	test.push_back(3);
	cout << test[0] << endl;
	cout << test[1] << endl;
	return 0;
}
