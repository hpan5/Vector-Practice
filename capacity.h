#ifndef __capacity__
#define __capacity__

#include<cstdlib>
#include<stdexcept>

template <class T>
T& vector<T>:: operator[](size_t n)
{
    return array[n];
}

#endif
