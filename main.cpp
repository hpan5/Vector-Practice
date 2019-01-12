#include "vector.h"
#include "capacity.h"
#include "modifier.h"
#include <iostream>
using namespace std;
int main()
{
   vector<int> test;
    test.push_back(2);
    vector<int> test2(test);
    test2[0] = 10;
    std::cout << test[0] << std::endl; 
    //vector<int> test(move(test2));
    
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
