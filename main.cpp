#include "vector.h"
#include <iostream>
using namespace std;

int main()
{
	::vector<int> test;
	test.push_back(2);
	test.push_back(3);
    test.push_back(4);
    test.resize(3,5);

    int *p = test.data();
    *p = 20;
    p[1] = 40;
    p[2] = 60;
    int j=50;
    cout << "test at " << j << " is: " << 	test.at(j);
    for(int* i= test.begin(); i < test.end(); i++) 
    {
        cout << "value at " << i << " is: " << *i << endl;
	}
    
    cout << "The first element in the array is: " << test.front() << endl;
    cout << "The last element in the array is: " << test.back() << endl;

    return 0;
}
