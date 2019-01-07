#include "vector.h"
#include <iostream>
using namespace std;

int main()
{
	::vector<int> test;
	test.push_back(2);
	test.push_back(3);
    test.push_back(4);
    test.resize(10,6);
	
    for(int i=0; i< test.size(); i++) 
    {
        cout << "value at " << i << " is: " << test[i] << endl;
	}
    return 0;
}
