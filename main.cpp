#include "vector.h"
#include "capacity.h"
#include "modifier.h"
#include <iostream>
using namespace std;

int main()
{
    vector<int> test;
    vector<int> test2;
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);
    test2.push_back(5);
    test2.push_back(6);
    //test2.push_back(7);
    swap(test, test2);
    //test.swap(test2);
    cout << "size of test is : " << test.size() << endl;
    cout << "capacity of test is : " << test.capacity() << endl;

    cout << "size of test2 is : " << test2.size() << endl;
    cout << "capacity of test2 is : " << test2.capacity() << endl; 
    for(int i= 0; i < test.size(); i++) 
    {
        cout << "value at " << i << " in test is: " << test[i] << endl;
    }
    for(int i= 0; i < test2.size(); i++) 
    {
        cout << "value at " << i << " in test2 is: " << test2[i] << endl;
    }

    return 0;
}
