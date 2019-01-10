#include "vector.h"
#include "capacity.h"
#include "modifier.h"
#include <iostream>
using namespace std;

int main()
{
    ::vector<int> test;
    //test.push_back(2);
    //test.push_back(3);
    //test.push_back(4);
    //test.reserve(5);
    test.resize(10);
    test.resize(5);

    cout << "size is : " << test.size() << endl;
    cout << "capacity is : " << test.capacity() << endl;

    test.push_back(1);

    cout << "size is : " << test.size() << endl;
    cout << "capacity is : " << test.capacity() << endl; 
    for(int i= 0; i < test.capacity(); i++) 
    {
        cout << "value at " << i << " is: " << test[i] << endl;
    }
    
    cout << "The first element in the array is: " << test.front() << endl;
    cout << "The last element in the array is: " << test.back() << endl;

    return 0;
}
