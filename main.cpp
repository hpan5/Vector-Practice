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
	
    for(int* i= test.begin(); i < test.end(); i++) 
    {
        cout << "value at " << i << " is: " << *i << endl;
	}
    
    cout << "The first element in the array is: " << test.front() << endl;
    cout << "The last element in the array is: " << test.back() << endl;

    return 0;
}
