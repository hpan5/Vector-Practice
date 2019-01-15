#include "vector.h"
#include <iostream>
//#include "capacity.h"
//#include "modifier.h"
//#include "non_mem.h"
using namespace std;
int main()
{
    vector<int> test;
    test.push_back(1);
    test.push_back(2);
    test.push_back(6);
    test.push_back(4);
    test.push_back(10);
    vector<int> test2 = test;
    if(test == test2)
    {
        cout << "test is equal to test2" << endl;
    }
    cout << "size of test is : " << test.size() << endl;
    cout << "capacity of test is : " << test.capacity() << endl;

    for(int i= 0; i < test.size(); i++)
    {
        cout << "value at " << i << " in test is: " << test[i] << endl;
    }

    cout << "size of test2 is : " << test2.size() << endl;
    cout << "capacity of test2 is : " << test2.capacity() << endl; 

   for(int i= 0; i < test2.size(); i++) 
    {
        cout << "value at " << i << " in test2 is: " << test2[i] << endl;
    }

    return 0;
}
