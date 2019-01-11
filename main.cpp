#include "vector.h"
#include "capacity.h"
#include "modifier.h"
#include <iostream>
using namespace std;

int main()
{
    ::vector<int> test;
    ::vector<int> test2;
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);
    test2.push_back(5);
    //test.resize(10);
    //test.resize(5);
    test.swap(test2);
    cout << "size is : " << test.size() << endl;
    cout << "capacity is : " << test.capacity() << endl;

    //test.push_back(1);
    //test.clear();
    if(test.empty())
    {
        cout << "empty now" << endl;
    }
    cout << "size is : " << test.size() << endl;
    cout << "capacity is : " << test.capacity() << endl; 
    for(int i= 0; i < test2.size(); i++) 
    {
        cout << "value at " << i << " is: " << test2[i] << endl;
    }
    
    cout << "The first element in the array is: " << test.front() << endl;
    cout << "The last element in the array is: " << test.back() << endl;

    return 0;
}
