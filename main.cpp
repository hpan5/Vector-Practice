#include "vector.h"
#include "capacity.h"
#include "modifier.h"
#include <iostream>
using namespace std;

int main()
{
    ::vector<int> test;
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);
    //test.resize(3,5);

    //int *p = test.data();
    //*p = 20;
    //p[1] = 40;
    //p[2] = 60;
    
    for(int i= 0; i < test.size(); i++) 
    {
        cout << "value at " << i << " is: " << test[i] << endl;
    }
    
    cout << "The first element in the array is: " << test.front() << endl;
    cout << "The last element in the array is: " << test.back() << endl;

    return 0;
}